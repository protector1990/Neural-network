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