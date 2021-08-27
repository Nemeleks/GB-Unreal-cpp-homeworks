#include <iostream>
#include <list>
#include <string>
#include "Matrix.h"
#include "RBF_Cont.h"
#include "RBF_Iterator.h"


void addAverange(std::list<double>& l)
{
	double averange = 0;
	for (const auto n : l )
	{
		averange += n;
	}
	averange /= l.size();
	l.push_back(averange);
}

int main()
{
	std::list<double> l{1, 2, 3, 4, 5, 5, 6, 7, 8};
	addAverange(l);
	std::cout << "[";
	for (const auto& n : l)
	{
		std::cout << n << " ";
	}
	std::cout << "]" << std::endl;
	std::cout << std::endl;

	Matrix m(5, true);
	std::cout << "Matrix:" << std::endl;
	m.printMatrix();
	std::cout <<"Matrix determinant = " << m.findDeterminant(m.getMatrix(), m.getMatrixSize()) << std::endl;
	std::cout << std::endl;

	RBF_Cont<int> cont = { 1,2,3,4,5,6,65345,567 };

	std::cout << "[";
	for (const auto& n : cont)
	{
		std::cout << n << " ";
	}
	std::cout << "]" << std::endl;

	
	RBF_Cont<int>::iterator it = cont.begin();
	it++;
	std::cout << *it << std::endl;

	RBF_Cont<std::string> contStr = { "one","two","three","eight","alpha" };

	std::cout << "[";
	for (const auto& n : contStr)
	{
		std::cout << n << " ";
	}
	std::cout << "]" << std::endl;
	std::cout << "size of contStr = " << contStr.getSize() << std::endl;
}