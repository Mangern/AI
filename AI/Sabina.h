#pragma once
#include "NeuralNet.h"
#include <vector>

class Sabina
{
public:
	Sabina();
	~Sabina();

	bool isCheckerBoard(float x1, float y1, float x2, float y2);

private:
	NeuralNet brain;
};

