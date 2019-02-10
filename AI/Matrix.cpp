#include "Matrix.h"


Matrix::Matrix(int rows, int cols) : rows(rows), cols(cols)
{
	// Allocate memoreyyy
	matrix = new float*[rows];
	for (int i = 0; i < rows; i++) {
		matrix[i] = new float[cols];
	}

	// Just initialize everything to 0
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			matrix[i][j] = 0.0f;
		}
	}
}

void Matrix::destroy()
{
	// Free up memory
	for (int i = 0; i < rows; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;
}



Matrix Matrix::vectorToMatrix(std::vector<float> vec, float bias)
{
	int rows = vec.size();
	Matrix matrix(rows + 1, 1);
	int i = 0;
	for (float f : vec) {
		matrix.insert(f, i, 0);
		i++;
	}
	matrix.insert(bias, rows, 0);
	return matrix;
}

void Matrix::print()
{
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			printf("%.1f ", matrix[i][j]);
		}
		printf("\n");
	}
}

void Matrix::insert(float value, int i, int j)
{
	matrix[i][j] = value;
}


