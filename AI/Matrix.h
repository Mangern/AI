#pragma once
#include <iostream>
#include <vector>
class Matrix
{
public:
	Matrix(int rows, int cols);
	
	void destroy();

	// Makes a matrix with 1 column out of given vector
	static Matrix vectorToMatrix(std::vector<float> vec, float bias);

	void insert(float value, int i, int j);


	void print();
private:
	int rows, cols;
	float** matrix;

	
};

