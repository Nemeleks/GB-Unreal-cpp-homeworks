#include <iostream>
using namespace std;

//2.5 start
struct mystruct
{
	unsigned isInt : 1;
	unsigned isFloat : 1;
	unsigned isChar : 1;
};

struct ustruct
{
	mystruct uniontype;
	union
	{
		int a;
		float b;
		char c;
	};

};
//2.5 end

//2.2 start
enum eXO
{
	X = 'X',
	O = 'O',
	SPACE = ' '
};
//2.2 end

//2.4 start
struct XOBoard
{
	eXO symbols;
	char vLine = '|';
	char hLine = '-';
};
//2.4 end

int main()
{
	// 2.1 start 
	short shortNum = 3;
	int iNum = 45;
	long long llNum = 12312354;
	char symbol = 'A';
	bool bBool = 1;
	float floatNum = 14.5;
	double doubleNum = 14.7856;
	// 2.1 end

	// 2.3 start
	eXO xo[3][3] = { {X, O, X}, {SPACE, X, O}, {X, SPACE, O} };
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			cout << (char)xo[i][j];
		}
		cout << endl;
	}
	// 2.3 end

	//2.5 start
	ustruct nStruct;
	int choice;
	nStruct.uniontype.isInt = 0;
	nStruct.uniontype.isFloat = 0;
	nStruct.uniontype.isChar = 0;

	cout << "For INT enter 1, FLOAT enter 2, CHAR enter 3" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
		nStruct.uniontype.isInt = 1;
		cout << "Enter INT" << endl;
		cin >> nStruct.a;
		break;
	case 2:
		nStruct.uniontype.isFloat = 1;
		cout << "Enter FLOAT" << endl;
		cin >> nStruct.b;
		break;
	case 3:
		nStruct.uniontype.isChar = 1;
		cout << "Enter CHAR" << endl;
		cin >> nStruct.c;
		break;

	default:
		break;
	}

	if (nStruct.uniontype.isInt == 1)
	{
		cout << "Your int is: " << nStruct.a;
	}
	else if (nStruct.uniontype.isFloat == 1)
	{
		cout << "Your float is: " << nStruct.b;
	}
	else if (nStruct.uniontype.isChar == 1)
	{
		cout << "Your CHAR is: " << nStruct.c;
	}
	//2.5 end
	return 0;
}