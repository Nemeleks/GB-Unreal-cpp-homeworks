#include <iostream>
#include "Header.h"
#include "Stack.h"

using namespace std;

int main()
{
	// ------------------------------- 1.1 START ------------------------------------
	// Class Power is in Header.h

	Power p; // using default constructor
	Power pw(2, 9); // using constructor with params
	cout << p.getNum1() << " pow " << p.getNum2() << " = " << p.calculate() << endl; // printing default
	double n1;
	double n2;
	cout << "enter num 1 : ";
	cin >> n1;
	cout << "enter num 2 : ";
	cin >> n2;
	p.set(n1, n2); 
	cout << p.getNum1() << " pow " << p.getNum2() << " = " << p.calculate() << endl; // printeng object after changing num1 and num2 
	cout << pw.getNum1() << " pow " << pw.getNum2() << " = " << pw.calculate() << endl; // printing object from constructor with params
	Power pwr(n1, n2); // using constructor with User params
	cout << pwr.getNum1() << " pow " << pwr.getNum2() << " = " << pwr.calculate() << endl; // printing object from constructor with User params
	cout << endl;

	// ------------------------------- 1.1 END ------------------------------------

	// ------------------------------- 1.2 START ------------------------------------
	//Class RGBA is in Header.h

	//using uint16_t for corrent cin 
	uint16_t red;
	uint16_t green;
	uint16_t blue;
	uint16_t alpha;

	RGBA rgba; 
	rgba.print(); // printing default constructor

	cout << "Enter Red : ";
	cin >> red;
	cout << "Enter Green : ";
	cin >> green;
	cout << "Enter Blue : ";
	cin >> blue;
	cout << "Enter Alpha : ";
	cin >> alpha;

	RGBA rgba1(static_cast<uint8_t>(red), static_cast<uint8_t>(green), static_cast<uint8_t>(blue), static_cast<uint8_t>(alpha)); 
	rgba1.print();
	cout << endl;

	// ------------------------------- 1.2 END ------------------------------------

	// ------------------------------- 1.3 START ------------------------------------
	// class Stack is in Stack.h and Stack.cpp
	Stack stack;
	stack.reset();
	stack.print();

	stack.push(3);
	stack.push(7);
	stack.push(5);
	stack.print();

	stack.pop();
	stack.print();

	stack.pop();
	stack.pop();
	stack.print();

	stack.pop();//try to get "empty" error
	stack.push(3);
	stack.push(7);
	stack.push(5);	
	stack.push(3);
	stack.push(7);
	stack.push(5);	
	stack.push(3);
	stack.push(7);
	stack.push(5);
	stack.push(7);
	stack.push(5);//try to get "full" error
	// ------------------------------- 1.3 END ------------------------------------

	return 0;
}