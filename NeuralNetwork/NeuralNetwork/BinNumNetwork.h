#pragma once
#include "Layer.h"

//consider using chars instead of ints for inputs!

class BinNumNetwork {
private:
	Layer* inputLayer;
	Layer* hiddenLayer;
	Layer* outputLayer;

public:
	BinNumNetwork() {
		inputLayer = new Layer(8);
		hiddenLayer = new Layer(100, inputLayer);
		outputLayer = new Layer(256, hiddenLayer);
	}
	~BinNumNetwork() {
		delete inputLayer; 
		delete hiddenLayer; 
		delete outputLayer;
	}

	void train(int precent);
	int output(int input) const;
};