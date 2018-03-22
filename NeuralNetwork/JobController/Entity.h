#pragma once
#include "sqlite\sqlite3.h"
//#include "Repository.h"

namespace MFNeuralNetwork {
	namespace Data {
		class Entity {
			//class Repository;
			friend class Repository;
			Repository* _repo;
		protected:
			bool _attachedToContext : 1;
			// all setters for fields in child entities must set this flag to tture
			bool _dirty : 1;
			bool _saved : 1;
		protected:
			Entity() : _dirty(false), _attachedToContext(false), _saved(false) {}
			virtual bool isNullIdentity() = 0;
		public:
			~Entity();
			virtual bool equals(const Entity* other) const = 0;
		};
	}
}