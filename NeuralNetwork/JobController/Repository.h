#pragma once
#include <vector>
#include <memory>
#include "sqlite\sqlite3.h"
#include <typeinfo>
#include <unordered_set>
#include <unordered_map>
#include "Entity.h"


namespace MFNeuralNetwork {
	namespace Data {
		struct EntCompareStruct {
			bool operator()(Entity* const lhs, Entity* const rhs) const
			{
				return lhs->equals(rhs);
			}
			//constexpr bool operator()(const Entity* &lhs, const Entity* &rhs) const
			//{
			//	return lhs->equals(rhs);
			//}
		};
		struct RepositoryKey {
			size_t repositoryTypeHash;
			size_t repositoryPointer;
		};
		using namespace std;
		class RepoException : public std::exception {
		public:
			RepoException(const char* what) :
				std::exception(what){}
		};
		class Repository {
		protected:
			std::unordered_set<Entity*,hash<Entity*>, EntCompareStruct> _entityCache;
			size_t _entityTypeInfoHash;
			virtual Entity* populateFromPreparedStatement(sqlite3_stmt* s) = 0;
			void setNewIdentity(Entity* entity);
			sqlite3* _db;
			long long _lastIndex;
			// Should be prepared by subclasses
			sqlite3_stmt* _getByIdStatement;
			static int getMaxIdCallback(void* t, int num, char** values, char** names);
			Repository(sqlite3* db, size_t typeinfo);
			static unordered_map<RepositoryKey, Repository*> _repositories;
			//static Repository* createNewInstance(sqlite3* db);
		public:
			template<typename T>
			T* getInstance(sqlite3* db) {
				RepositoryKey key = { typeid(T).hash_code(), reinterpret_cast<size_t>(db) };
				auto iter = _repositories.find(key);
				if (iter == _repositories.end()) {
					Repository* newRepo = T::createNewInstance(db);
					_repositories.insert(key, newRepo);
					return newRepo;
				}
				return *iter;
			}
			void detachFromContext(Entity* entity);
			void attachToContext(Entity* entity, bool autoReidentify = false);
			void persist(Entity* entity);
			Entity* getById(long long id);
			virtual void mDelete(Entity* entity) = 0;
			virtual void save(Entity* entity) = 0;
			virtual void update(Entity* entity) = 0;
			template <typename T>
			T* createNewEntity() {
				T* ret = new T();
				setNewIdentity(ret);
				ret->_dirty = true;
				attachToContext(ret, true);
				Entity* en = (Entity*)ret;
				return ret;
			}

			//using T = Entity;
			template <class T>
			class PreparedStatementResultGetter {
			public:
				static std::vector<T*> getResultFromPreparedStatement(sqlite3_stmt* stmt, Repository* repo) {
					bool run = true;
					std::vector<T*> ret;
					while (run) {
						int status = sqlite3_step(stmt);
						switch (status) {
						case SQLITE_ROW: {
							bool existsInCache = false;
							Entity * ent = repo->populateFromPreparedStatement(stmt);
							for (auto entity : repo->_entityCache) {
								if (entity->equals(ent)) {
									existsInCache = true;
									ret.push_back((T*)entity);
									delete ent;
									continue;
								}
							}
							if (!existsInCache) {
								repo->attachToContext(ent);
								ret.push_back((T*)ent);
							}
						}
							break;
						case SQLITE_DONE:
							run = false;
							break;
						default:
							run = false;
							throw RepoException("Something went wrong with the query.");
							break;
						}
					}
					sqlite3_reset(stmt);
					return ret;
				}
			};
		};
	}
}