#pragma once
#include "Layer.h"
#include <thread>
#include <mutex>
#include <vector>

namespace MFNeuralNetwork {
	struct LayerWorkerThread {
		friend class MultiThreadedLayer;
	private:
		void workerThreadMainLoop();
		LayerWorkerThread(MultiThreadedLayer* layer, Neuron* startNeuron, Neuron* endNeuron) : 
			_layer(layer),
			_startNeuron(startNeuron),
			_endNeuron(endNeuron)
		{}
	
		bool _started = false;
		MultiThreadedLayer* _layer;
		std::mutex _m;
		std::condition_variable _cv;
		std::thread _thread{ &LayerWorkerThread::workerThreadMainLoop, this };
		Neuron* _startNeuron;
		Neuron* _endNeuron;
		void run();
	};

	class MultiThreadedLayer : public Layer {
		friend class NetworkLoader;
		friend class LayerWorkerThread;
	private:
		int _threadsAtWork;
		std::vector<LayerWorkerThread*> _threads;
		std::mutex _m;
		std::condition_variable _cv;
		virtual void respond() override;

		virtual void train(float learningRate) override
		{
			Layer::train(learningRate); //leave it at this for now
		}

		void threadFinished();

	public:
		MultiThreadedLayer(int numNeurons, Layer* prevLayer, int numOfThreads);
		
	};
}