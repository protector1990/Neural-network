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

		void Repository::detachFromContext(Entity* entity)
		{
			_entities.erase(entity);
			entity->_attachedToContext = false;
			entity->_repo = nullptr;
		}

		void Repository::attachToContext(Entity* entity, bool autoReidentify)
		{
			Entity* rawEnt = entity;
			auto ret = _entities.emplace(rawEnt);
			if (!ret.second) {
				if (!autoReidentify) {
					throw RepoException("Entity already exists in context");
				}
				setNewIdentity(rawEnt);
				auto ret2 = _entities.emplace(rawEnt);
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

		