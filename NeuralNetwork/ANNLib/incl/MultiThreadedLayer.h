#pragma once
#include "Layer.h"
#include <thread>
#include <mutex>
#include <vector>

namespace MFNeuralNetwork {

	struct LayerWorkerThread {
		enum Mode {MOD_RESPOND, MOD_TRAIN};
		friend class MultiThreadedLayer;
	private:
		void workerThreadMainLoop();
		LayerWorkerThread(MultiThreadedLayer* layer, Neuron* startNeuron, Neuron* endNeuron) : 
			_layer(layer),
			_startNeuron(startNeuron),
			_endNeuron(endNeuron)
		{}
	
		float _learningRate = LEARNING_RATE;
		bool _started = false;
		MultiThreadedLayer* _layer;
		std::mutex _m;
		std::condition_variable _threadCv;
		std::thread _thread{ &LayerWorkerThread::workerThreadMainLoop, this };
		Neuron* _startNeuron;
		Neuron* _endNeuron;
		Mode _mode;
		int _currentBackPropIndex;
		void run(Mode m);
		void initBackPropagation(int currentIndex, float learningRate);
	};

	class MultiThreadedLayer : public Layer {
		friend class NetworkLoader;
		friend class LayerWorkerThread;
	private:
		int* _backPropStartNeuronIndexes;
		int* _backPropEndNeuronIndexes;
		int _threadsAtWork;
		std::vector<LayerWorkerThread*> _threads;
		std::mutex _m;
		std::condition_variable _layerCv;
		virtual void respond() override;

		virtual void train(double learningRate) override;

		void threadFinished();

	public:
		MultiThreadedLayer(int numNeurons, Layer* prevLayer, int numOfThreads);
		
	};
}