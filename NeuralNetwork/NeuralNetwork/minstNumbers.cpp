#include "programs.h"
#include "NeuralNetwork.h"
#include "MinstDataSet.h"
#include "NetworkLoader.h"
#include <iostream>
#include <thread>
#include <chrono>

#include <irrlicht.h>
using namespace irr;
using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;

#include "ThreadDispatcher.h"

using namespace MFNeuralNetwork;

IGUIEnvironment* mgui;
IVideoDriver* driver;
IGUIStaticText* percentageComplted;
IGUIStaticText* currentNumber;
IGUIImage* currentImage;
IGUIButton* trainButton;
size_t currentIndex = 0;
size_t prevIndex = 0;

const wchar_t* texts[10]{ L"Zero", L"One", L"Two", L"Three", L"Four", L"Five", L"Six", L"Seven", L"Eight", L"Nine" };

ThreadDispatcher dispatcher;

MinstDataSet trainingSet(10000, { "train-images.idx3-ubyte" }, { "train-labels.idx1-ubyte" });
MinstDataSet testSet(10000, { "t10k-images.idx3-ubyte" }, { "t10k-labels.idx1-ubyte" });

ITexture* getTextureFromDataSet(IVideoDriver* driver, DataSet* dataSet, size_t index) {
	void* imageMemory = malloc(dataSet->getNumOfInputs() * 3);
	unsigned char* newMemory = (unsigned char*)imageMemory;
	float* dataPoint = dataSet->getInputDataPoint(index);
	for (int i = 0; i < dataSet->getNumOfInputs(); ++i) {
		int offset = i * 3;
		char val = dataPoint[i] * 255;
		newMemory[offset] = val;
		newMemory[offset + 1] = val;
		newMemory[offset + 2] = val;
	}
	IImage* image = driver->createImageFromData(ECF_R8G8B8, { 28, 28 }, imageMemory, false);
	path p;
	char path[256];
	sprintf(path, "imageFor%i", index);
	p.append(path);
	

	ITexture* tex = driver->addTexture(p, image);
	image->drop();
	free(imageMemory);
	return tex;
}

void neuralNetwork();

class MyEventReceiver : public IEventReceiver {
public:
	virtual bool OnEvent(const SEvent& event)
	{
		if (event.EventType == EET_GUI_EVENT && event.GUIEvent.EventType == EGET_BUTTON_CLICKED) {
			if (event.GUIEvent.Caller == trainButton) {
				dispatcher.postTask(neuralNetwork);
				return true;
			}
		}
		return false;
	}
};

void irrUpdateProgress();

void irrlichtMain() {
	IrrlichtDevice *device = createDevice(EDT_OPENGL,
		dimension2d<u32>(640, 480), 32);

	if (!device)
		return;
	ISceneManager* smgr = device->getSceneManager();
	driver = device->getVideoDriver();

	mgui = smgr->getGUIEnvironment();
	
	currentImage = mgui->addImage({ 50, 50, 100, 100 }, nullptr, -1, 0, false);
	currentImage->setScaleImage(true);
	percentageComplted = mgui->addStaticText(L"", { 50, 150, 400, 200 });
	currentNumber = mgui->addStaticText(L"", { 50, 100, 400, 150 });

	trainButton = mgui->addButton({ 50, 300, 150, 350 });
	trainButton->setText(L"Train!");

	// Then create the event receiver, giving it that context structure.
	MyEventReceiver receiver;

	// And tell the device to use our custom event receiver.
	device->setEventReceiver(&receiver);

	while (device->run())
	{
		//try {
			irrUpdateProgress();
			driver->beginScene(true, true, video::SColor(255, 100, 101, 140));
			smgr->drawAll();
			mgui->drawAll();
			driver->endScene();
			//std::cout << vec.X << ' ' << vec.Y << ' ' << vec.Z << std::endl;
			std::this_thread::sleep_for(std::chrono::milliseconds(16));
		//}
		//catch (std::exception &e) {
		//	std::cout << e.what() << std::endl;
		//}
	}
	
}

void testNetwork(NeuralNetwork* network, DataSet& dataSet) {
	size_t hits = 0;
	for (size_t dataSetIter = 0; dataSetIter < dataSet.getNumOfDataPoints(); ++dataSetIter) {
		float* inputs = dataSet.getInputDataPoint(dataSetIter);
		float* expectedResult = dataSet.getExptectedResult(dataSetIter);
		network->output(inputs);
		auto result = network->getOutputs();
		bool hit = true;
		int expMaxInd = 0;
		float expMax = -10000.f;
		int maxInd = 0;
		float mmax = -10000.f;
		
		for (int i = 0; i < 10; ++i) {
			if (expectedResult[i] > expMax) {
				expMaxInd = i;
				expMax = expectedResult[i];
			}
			if (result[i] > mmax) {
				maxInd = i;
				mmax = result[i];
			}
		}
		if (maxInd == expMaxInd) {
			++hits;
		}
	}
	std::cout << "Percentage of hits: " << ((float)hits / dataSet.getNumOfDataPoints()) * 100.f << '\n';
}

void irrUpdateProgress() {
	if (currentIndex == prevIndex) return;
	ITexture* image = getTextureFromDataSet(driver, &trainingSet, currentIndex);
	ITexture* oldImage = currentImage->getImage();
	currentImage->setImage(image);
	driver->removeTexture(oldImage);
	
	float* output = trainingSet.getExptectedResult(currentIndex);
	size_t i = 0;
	for (; i < 10; ++i) {
		if (output[i] > 0.f)
			break;
	}
	currentNumber->setText(texts[i]);

	wchar_t percentageText[256];
	swprintf_s(percentageText, L"Percentage completed: %d", currentIndex);
	percentageComplted->setText(percentageText);
	prevIndex = currentIndex;
}

void progressCallback(size_t currentIndexProcessed) {
	currentIndex = currentIndexProcessed;
}

void neuralNetwork() {
	try {
		NetworkLoader loader;
		NeuralNetwork* network = loader.newRandomNetwork(4, new size_t[4]{ trainingSet.getNumOfInputs(), 100, 50, 10 }, "pppp"/*, new int[4]{ 1, 4, 4, 1 }*/);

		//NeuralNetwork* network = loader.loadNetwork("minstNetworkSmall.txt", "pmp", new int[3]{ 1, 4, 1 });
		network->train(trainingSet, LEARNING_RATE, progressCallback);
		std::chrono::high_resolution_clock::time_point t1 = std::chrono::high_resolution_clock::now();
		testNetwork(network, testSet);
		std::chrono::high_resolution_clock::time_point t2 = std::chrono::high_resolution_clock::now();
		auto duration = std::chrono::duration_cast<std::chrono::microseconds>(t2 - t1).count();
		std::cout << "duration " << duration << '\n';
		//loader.saveNetwork(network, "minstNetworkSmall.txt");
		delete network;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}

void minstNumbersRecognitorMainLoop() {
	irrlichtMain();
	//neuralNetwork();
}