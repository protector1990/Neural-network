#pragma once
#include <set>

namespace MFNeuralNetwork {
	namespace Data {
		class EntityPointer {
			std::set<EntityPointer*> _interestedParties;
			void removeInterestedParty(EntityPointer* party);
		public:
			~EntityPointer();
		};
	}
}