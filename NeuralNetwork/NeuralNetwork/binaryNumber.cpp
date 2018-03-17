#include <iostream>
#include <NeuralNetwork.h>
#include <random>
#include <NetworkLoader.h>
#include "programs.h"
#include <PlainDataSet.h>

using namespace std;
using namespace MFNeuralNetwork;

unique_ptr<float[]> getInputForNumber(unsigned int number) {
	float* ret = new float[8];
	unsigned int mask = 0b1;
	for (int i = 7; i > -1; --i) {
		ret[i] = mask & number;
		number >>= 1;
	}
	return unique_ptr<float[]>(ret);
}

void populateTrainingSet(PlainDataSet* set) {
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<unsigned int> dis(0, 255);
	unsigned int mask = 0b1;
	size_t numberOfDataPoints = set->getNumOfDataPoints();
	for (size_t i = 0; i < numberOfDataPoints; ++i) {
		float* input = set->getInputDataPoint(i);
		float* expectedResult = set->getExptectedResult(i);
		for (size_t expIter = 0; expIter < set->getNumOfOutputs(); ++expIter) {
			expectedResult[expIter] = 0;
		}
		unsigned int random = dis(gen);
		expectedResult[random] = 1;
		for (int j = 7; j > -1; --j) {
			input[j] = mask & random;
			random >>= 1;
		}
	}
}

PlainDataSet testSet(256, 8, 256);

void populateTestSet() {
	unsigned int mask = 0b1;
	for (size_t i = 0; i < 256; ++i) {
		float* input = testSet.getInputDataPoint(i);
		float* expectedResult = testSet.getExptectedResult(i);
		expectedResult[i] = 1;
		unsigned int num = i;
		for (int j = 7; j > -1; --j) {
			input[j] = mask & num;
			num >>= 1;
		}
	}
}

float testNetwork(NeuralNetwork* network) {
	float expectedHits = (float)testSet.getNumOfDataPoints();
	int actualHits = 0;
	for (size_t dataPointIter = 0; dataPointIter < testSet.getNumOfDataPoints(); ++dataPointIter) {
		int result = network->output(testSet.getInputDataPoint(dataPointIter));
		if (result == dataPointIter) {
			++actualHits;
		}
		//cout << dataPointIter << ' ' << result << endl;
	}
	//system("pause");
	return actualHits / expectedHits;
}

NetworkLoader networkLoader;

void binaryNumberRecognitorMainLoop() {
	int choice = 1, userInput;
	NeuralNetwork* net = networkLoader.newRandomNetwork(3, new size_t[3]{ 8, 100, 256 });
	//NeuralNetwork* net = networkLoader.loadNetwork("network1.txt");
	NeuralNetwork& bnNetwork = *net;
	populateTestSet();
	PlainDataSet trainingDataSet(512, 8, 256);
	float trainingPercent;

	while (choice) {
		cout << "1. Prepoznaj\n2. Treniraj\n3. Kraj\n";
		cin >> choice; cout << "\n";

		switch (choice)
		{
		case 1:
			cout << "Broj za prepoznavanje(0 - 255)? ";
			cin >> userInput; cout << "\n";
			cout << bnNetwork.output(&(getInputForNumber(userInput)[0])) << "\n";
			break;

		case 2:
			cout << "Do koliko procenta tacnosti zelite da trenirate(50 - 100)? ";
			cin >> trainingPercent; cout << "\n";

			if (trainingPercent < 50 || 100 < trainingPercent)
				break;

			while (true) {
				populateTrainingSet(&trainingDataSet);
				bnNetwork.train(trainingDataSet, LEARNING_RATE);
				float achievedPercent = testNetwork(&bnNetwork) * 100;
				cout << "Procenat pogodjenih: " << achievedPercent << std::endl;
				if (achievedPercent > trainingPercent) {
					networkLoader.saveNetwork(net, "network1.txt");
					break;
				}
			}

			break;

		default:
			choice = 0;
			break;
		}
	}
}