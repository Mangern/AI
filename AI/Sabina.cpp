#include "Sabina.h"



Sabina::Sabina() : brain(4, 5, 1)
{
}


Sabina::~Sabina()
{
}

bool Sabina::isCheckerBoard(float x1, float y1, float x2, float y2)
{
	std::vector<float> input(4);
	input[0] = x1;
	input[1] = x2;
	input[2] = y1;
	input[3] = y2;
	return brain.think(input)[0] > 0.5f;
}
