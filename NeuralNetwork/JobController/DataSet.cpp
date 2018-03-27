#include "DataSet.h"

using namespace std;

namespace MFNeuralNetwork {
	namespace Data {
		string DataSet::getPath()
		{
			return _path;
		}
		void DataSet::setPath(std::string & path)
		{
			_path = path;
			_dirty = true;
		}
		string DataSet::getName()
		{
			return _name;
		}
		void DataSet::setName(std::string & name)
		{
			_name = name;
			_dirty = true;
		}
	}
}