#pragma once
#include <string>
#include "Entity.h"

namespace MFNeuralNetwork {
	namespace Data {
		class DataSet : public Entity {
			friend class DataSetRepository;
		private:
			std::string _path;
			std::string _name;
		public:
			std::string getPath();
			void setPath(std::string& path);
			std::string getName();
			void setName(std::string& name);
		};
	}
}