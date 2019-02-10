#pragma once
#include <iostream>
#include <vector>
class Matrix
{
public:
	Matrix(int rows, int cols);
	~Matrix();

	// Makes a matrix with 1 column out of given vector
	static Matrix vectorToMatrix(std::vector<float> vec);

	void insert(float value, int i, int j);

	void addBias(float bias);

	void print();
private:
	int rows, cols;
	float** matrix;

	
};

