#include "programs.h"
#include "NeuralNetwork.h"
#include "MinstDataSet.h"
#include "NetworkLoader.h"
#include <iostream>
#include <thread>

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
	IImage* image = driver->createImageFromData(ECF_R8G8B8, { 28, 28 }, imageMemory, true);
	path p;
	p.append("imageFor");
	p.append(index);
	return driver->addTexture(p, image);
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
		irrUpdateProgress();
		driver->beginScene(true, true, video::SColor(255, 100, 101, 140));		
		smgr->drawAll();
		mgui->drawAll();
		driver->endScene();
		//std::cout << vec.X << ' ' << vec.Y << ' ' << vec.Z << std::endl;
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
		for (int i = 0; i < 10; ++i) {
			if (expectedResult[i] != result[i]) {
				hit = false;
				break;
			}
		}
		if (hit) {
			++hits;
		}
	}
	std::cout << "Percentage of hits: " << ((float)hits / dataSet.getNumOfDataPoints()) * 100.f << '\n';
}

void irrUpdateProgress() {
	if (currentIndex == prevIndex) return;
	ITexture* image = getTextureFromDataSet(driver, &trainingSet, currentIndex);
	currentImage->setImage(image);
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
	NetworkLoader loader;
	NeuralNetwork* network = loader.newRandomNetwork(4, new size_t[4]{ trainingSet.getNumOfInputs(), 100, 50, 10 });
	network->train(trainingSet, progressCallback);
	testNetwork(network, testSet);
	loader.saveNetwork(network, "minstNetwork.txt");
	delete network;
}

void minstNumbersRecognitorMainLoop() {
	irrlichtMain();
}