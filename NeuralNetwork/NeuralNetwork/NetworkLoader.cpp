#include "NetworkLoader.h"
#include <fstream>
#include <random>
#include "MultiThreadedLayer.h"

using namespace std;

namespace MFNeuralNetwork {
	NeuralNetwork* NetworkLoader::loadNetwork(const char* path, const char* layerTypes, int* numbersOfThreads)
	{
		ifstream in;
		in.open(path);
		size_t numOfLayers;
		size_t numOfInputs = 0;
		in >> numOfLayers;
		NeuralNetwork* ret = new NeuralNetwork(numOfLayers);
		Layer* prevLayer = nullptr;
		for (size_t layerIter = 0; layerIter < numOfLayers; ++layerIter) {
			size_t numOfNeurons;
			in >> numOfNeurons;
			Layer* currentLayer;
			if (layerTypes == nullptr || layerTypes[layerIter] == 'p') {
				currentLayer = new Layer(numOfNeurons, prevLayer);
			}
			else if (layerTypes != nullptr && layerTypes[layerIter] == 'm') {
				currentLayer = new MultiThreadedLayer(numOfNeurons, prevLayer, numbersOfThreads[layerIter]);
			}
			else {
				throw exception("Unknown layer type");
			}
			ret->_layers.push_back(currentLayer);
			Neuron* neurons = currentLayer->_neurons;
			for (size_t neuronIter = 0; neuronIter < numOfNeurons; ++neuronIter) {
				float bias;
				in >> bias;
				Neuron* currentNeuron = new (neurons + neuronIter) Neuron(prevLayer);
				currentNeuron->_bias = bias;
				double* weights = currentNeuron->_weights;
				for (size_t weightsIter = 0; weightsIter < numOfInputs; ++weightsIter) {
					in >> weights[weightsIter];
				}
			}
			numOfInputs = numOfNeurons;
			prevLayer = currentLayer;
		}
		return ret;
	}

	NeuralNetwork * NetworkLoader::newRandomNetwork(size_t numOfLayers, size_t * numOfNeuronsPerLayer, const char* layerTypes, int* numbersOfThreads)
	{
		random_device rd;
		mt19937 gen(rd());
		uniform_real_distribution<float> dis(-1., 1.);
		size_t numOfInputs = 0;
		NeuralNetwork* ret = new NeuralNetwork(numOfLayers);
		Layer* prevLayer = nullptr;
		for (size_t layerIter = 0; layerIter < numOfLayers; ++layerIter) {
			size_t numOfNeurons = numOfNeuronsPerLayer[layerIter];
			Layer* currentLayer;
			if (layerTypes == nullptr || layerTypes[layerIter] == 'p') {
				currentLayer = new Layer(numOfNeurons, prevLayer);
			}
			else if (layerTypes != nullptr && layerTypes[layerIter] == 'm') {
				currentLayer = new MultiThreadedLayer(numOfNeurons, prevLayer, numbersOfThreads[layerIter]);
			}
			else {
				throw exception("Unknown layer type");
			}
			ret->_layers.push_back(currentLayer);
			Neuron* neurons = currentLayer->_neurons;
			for (size_t neuronIter = 0; neuronIter < numOfNeurons; ++neuronIter) {
				float bias = 0; //for now
				Neuron* currentNeuron = new (neurons + neuronIter) Neuron(prevLayer);
				currentNeuron->_bias = bias;
				double* weights = currentNeuron->_weights;
				for (size_t weightsIter = 0; weightsIter < numOfInputs; ++weightsIter) {
					weights[weightsIter] = dis(gen);
				}
				int c = 0;
			}
			numOfInputs = numOfNeurons;
			prevLayer = currentLayer;
		}
		return ret;
	}



	void NetworkLoader::saveNetwork(NeuralNetwork * network, const char * path)
	{
		ofstream out;
		out.open(path);
		out << network->_numOfLayers << '\n';
		for (size_t layerIter = 0; layerIter < network->_numOfLayers; ++layerIter) {
			out << network->_layers[layerIter]->_numOf << '\n';
			for (size_t neuronIter = 0; neuronIter < network->_layers[layerIter]->_numOf; ++neuronIter) {
				out << network->_layers[layerIter]->_neurons[neuronIter]._bias << ' ';
				for (size_t weightsIter = 0; weightsIter < network->_layers[layerIter]->_neurons[neuronIter]._numPrev; ++weightsIter) {
					out << network->_layers[layerIter]->_neurons[neuronIter]._weights[weightsIter] << ' ';
				}
				out << '\n';
			}
		}
	}


}