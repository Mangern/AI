#pragma once
#include <vector>
#include "Matrix.h"

class NeuralNet
{
public:
	NeuralNet(int inputs, int hidden, int outputs);
	~NeuralNet();

	// Feeds "input" into the brain and outputs the output nodes as a vector
	std::vector<float> think(std::vector<float> input);

private:
	Matrix wih, who;
};

