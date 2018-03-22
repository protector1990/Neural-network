#pragma once
#include <vector>
#include <memory>
#include "sqlite\sqlite3.h"
#include <typeinfo>
#include "Entity.h"
#include <unordered_set>


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
		using namespace std;
		class RepoException : public std::exception {
		public:
			RepoException(const char* what) :
				std::exception(what){}
		};
		class Repository {
		protected:
			std::unordered_set<Entity*,hash<Entity*>, EntCompareStruct> _entities;
			size_t _entityTypeInfoHash;
			virtual Entity* populateFromDataSet(int argc, char **argv, char **azColName) = 0;
			virtual Entity* populateFromPreparedStatement(sqlite3_stmt* s) = 0;
			virtual void setNewIdentity(Entity* entity) = 0;
			sqlite3* _db;
		public:
			
			void detachFromContext(Entity* entity);
			void attachToContext(Entity* entity, bool autoReidentify = false);
			void persist(Entity* entity);
			virtual void mDelete(Entity* entity) = 0;
			virtual void save(Entity* entity) = 0;
			virtual void update(Entity* entity) = 0;
			virtual std::shared_ptr<Entity> getNewentity() = 0;
			Repository(sqlite3* db, size_t typeinfo);
		};
	}
}