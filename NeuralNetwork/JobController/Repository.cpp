#include "Repository.h"
#include "Entity.h"
#include "Job.h"
#include "JobExecution.h"

using namespace std;

using namespace MFNeuralNetwork::Data;
		void Repository::persist(Entity * entity)
		{
			if (typeid(*entity).hash_code() != _entityTypeInfoHash) {
				throw RepoException("Wrong entity type for this repository.");
			}
			if (entity->_dirty) {
				if (!entity->_saved) {
					save(entity);
					entity->_saved = true;
				}
				else {
					update(entity);
				}
				entity->_dirty = false;
			}
		}

		Entity * MFNeuralNetwork::Data::Repository::getById(long long id)
		{
			// Maybe entityCache should be a hash map, with id as the key?
			for (auto entity : _entityCache) {
				if (entity->_id == id) {
					return entity;
				}
			}
			sqlite3_bind_int64(_getByIdStatement, 1, id);
			sqlite3_step(_getByIdStatement);
			Entity* ret = populateFromPreparedStatement(_getByIdStatement);
			sqlite3_reset(_getByIdStatement);
			attachToContext(ret);
			return ret;
		}

		void Repository::detachFromContext(Entity* entity)
		{
			_entityCache.erase(entity);
			entity->_attachedToContext = false;
			entity->_repo = nullptr;
			entity->_dirty = true;
		}

		void Repository::attachToContext(Entity* entity, bool autoReidentify)
		{
			Entity* rawEnt = entity;
			auto ret = _entityCache.emplace(rawEnt);
			if (!ret.second) {
				if (!autoReidentify) {
					throw RepoException("Entity already exists in context");
				}
				setNewIdentity(rawEnt);
				auto ret2 = _entityCache.emplace(rawEnt);
				if (!ret.second) {
					throw RepoException("Error attaching to context");
				}
			}
			entity->_attachedToContext = true;
			entity->_repo = this;
		}

		Repository::Repository(sqlite3 * db, size_t typeInfoHash) :
			_db(db),
			_entityTypeInfoHash(typeInfoHash)
		{
		}

		void Repository::setNewIdentity(Entity * entity)
		{
			entity->_id = _lastIndex++;
			entity->_dirty = true;
		}

		