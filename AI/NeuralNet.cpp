#include "NeuralNet.h"


NeuralNet::NeuralNet(int inputs, int hidden, int outputs) : wih(hidden, inputs + 1), who(outputs, hidden + 1)
{
	
}

NeuralNet::~NeuralNet()
{
}

std::vector<float> NeuralNet::think(std::vector<float> input)
{

	Matrix inputMatrix = Matrix::vectorToMatrix(input, 1.0f); // 1.0f is the bias

	inputMatrix.print();

	std::vector<float> output(1);
	output[0] = 0.7f;
	return output;
}
