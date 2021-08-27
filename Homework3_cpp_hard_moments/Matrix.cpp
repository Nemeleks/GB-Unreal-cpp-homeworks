#include "Matrix.h"

Matrix::Matrix(size_t matrixSize, bool isRand):
	_matrixSize(matrixSize),
	_isRand(isRand)
{
	if (_matrixSize <= 0)
	{
		std::cout << "Incorrect matrix size!" << std::endl;
		return;
	}
	_matrix = new int* [_matrixSize];
	for (int i = 0; i < _matrixSize; i++)
	{
		_matrix[i] = new int[_matrixSize];
	}
	if (isRand)
	{
		srand(time(NULL));
		for (int i = 0; i < _matrixSize; i++)
		{
			for (int j = 0; j < _matrixSize; j++)
			{
				_matrix[i][j] = rand()%100;
			}
		}
	}
	else
	{
		for (int i = 0; i < _matrixSize; i++)
		{
			for (int j = 0; j < _matrixSize; j++)
			{
				std::cout << "Matrix[" << i << "][" << j << "] = ";
				std::cin >> _matrix[i][j];
			}
		}
	}
}

Matrix::~Matrix()
{
	memoryClear(_matrix, _matrixSize);
}

void Matrix::printMatrix()
{
	for (int i = 0; i < _matrixSize; i++)
	{
		for (int j = 0; j < _matrixSize; j++)
		{
			std::cout << _matrix[i][j] << "   ";
		}
		std::cout << std::endl;
	}
}

int** Matrix::getMatrix() const
{
	return _matrix;
}

int Matrix::getMatrixSize() const
{
	return _matrixSize;
}

void Matrix::memoryClear(int** mtx, int mSize)
{
	for (int i = 0; i < mSize; i++)
	{
		delete[] mtx[i];
	}
	delete[] mtx;
}

int Matrix::findDeterminant(int** mtx, int mSize)
{
	if (mSize == 1)
	{
		return mtx[0][0];
	}
	else if (mSize == 2)
	{
		return (mtx[0][0] * mtx[1][1]) - (mtx[0][1] * mtx[1][0]);
	}
	else
	{
		int det = 0;

		for (int k = 0; k < mSize; k++)
		{
			int** m = new int* [mSize - 1];

			for (int i = 0; i < mSize -1; i++)
			{
				m[i] = new int[mSize - 1];
			}

			for (int i = 1; i < mSize; i++)
			{
				int t = 0;
				
				for (int j = 0; j < mSize; j++)
				{
					if (j == k)
					{
						continue;
					}
					m[i - 1][t] = mtx[i][j];
					t++;
				}
			}
			det += pow(-1, k + 2) * mtx[0][k] * findDeterminant(m, mSize - 1);
			memoryClear(m, mSize - 1);
		}
		return det;
	}
}
