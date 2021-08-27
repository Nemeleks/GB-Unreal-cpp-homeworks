#pragma once

#include <math.h>
#include <random>
#include <iostream>
#include <ctime>
class Matrix
{
private:
	int _matrixSize;
	int** _matrix;
	bool _isRand;
	
	void memoryClear(int** mtx, int mSize );

public:
	Matrix(size_t matrixSize, bool isRand);
	~Matrix();
	
	int findDeterminant(int** mtx, int mSize);
	void printMatrix();

	int** getMatrix() const;
	int getMatrixSize() const;
};

