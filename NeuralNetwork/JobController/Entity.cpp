#include "Repository.h"
#include "Entity.h"

using namespace MFNeuralNetwork::Data;

Entity::~Entity() {
	if (_attachedToContext) {
		if (_dirty) {
			_repo->persist(this);
		}
		_repo->detachFromContext(this);
	}
}

bool Entity::equals(const Entity * other) const
{
	if (typeid(*this) != typeid(*other)) {
		return false;
	}
	return _id == other->_id;
}
