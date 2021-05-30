#include <iostream>
#include <ctime>

using namespace std;

enum CELL
{
	X = 'X',
	O = 'O',
	EMPTY = '_'
};

enum GameProgress
{
	inProgress,
	Tie,
	playerWin,
	aiWin

};

struct Field
{
	CELL** ppField = nullptr;
	CELL player = EMPTY;
	CELL ai = EMPTY;
	int turn = 0;
	unsigned size_y = 3;
	unsigned size_x = 3;
	GameProgress gameState = inProgress;

};

struct COODR
{
	size_t y;
	size_t x;
};

void initGame(Field& f)
{
	f.ppField = new CELL * [f.size_y];
	for (size_t i = 0; i < f.size_y; i++)
	{
		f.ppField[i] = new CELL[f.size_x];
	}

	for (size_t y = 0; y < f.size_y; y++)
	{
		for (size_t x = 0; x < f.size_x; x++)
		{
			f.ppField[y][x] = EMPTY;
		}

	}
	f.gameState = inProgress;
	srand(time(0));
	size_t whoXO = rand() % 1000;
	if (whoXO >=500)
	{
		f.player = X;
		f.ai = O;
		f.turn = 0;
	}
	else
	{
		f.player = O;
		f.ai = X;
		f.turn = 1;
	}
}
void drawField(Field& f)
{
	cout << endl;
	cout << "    1 2 3"<<endl;
	for (size_t y = 0; y < f.size_y; y++)
	{
		cout <<" "<< y+1<<" ";
		for (size_t x = 0; x < f.size_x; x++)
		{
			cout <<  "|";
			cout <<static_cast<char>(f.ppField[y][x]);
		}
		cout << "|";
		cout<<endl;
	}
	cout << endl;
	cout << " Player is: " << static_cast<char>(f.player) << endl;
	cout << " AI is: " << static_cast<char>(f.ai) << endl;

}

void deinitGame(Field& f)
{
	for (size_t i = 0; i < f.size_y; i++)
	{
		delete[] f.ppField[i];
	}
	delete[] f.ppField;

}
bool isLegal(Field& f, COODR& c)
{
	if (c.y < 3 && c.y >=0 && c.x < 3 && c.x >= 0 && f.ppField[c.y][c.x] == EMPTY)
	{
		return true;
	}
	else
	{
		cout << " Wrong coord!" << endl;
		return false;
	}
}
GameProgress isWon(Field& f)
{
	int m = 0;
	for (size_t y = 0; y < 3; y++)
	{
		if (f.ppField[y][0] == f.ppField[y][1] && f.ppField[y][0] == f.ppField[y][2])
		{
			if (f.ppField[y][0] == f.player)
			{
				return playerWin;
			}
			else if (f.ppField[y][0] == f.ai)
			{
				return aiWin;
			}
		}
	}
	for (size_t x = 0; x < 3; x++)
	{
		if (f.ppField[0][x] == f.ppField[1][x] && f.ppField[0][x] == f.ppField[2][x])
		{
			if (f.ppField[0][x] == f.player)
			{
				return playerWin;
			}
			else if (f.ppField[0][x] == f.ai)
			{
				return aiWin;
			}
		
		}
	}

	if (f.ppField[0][0] == f.ppField[1][1] && f.ppField[0][0] == f.ppField[2][2])
	{
		if (f.ppField[0][0] == f.player)
		{
			return playerWin;
		}
		else if (f.ppField[0][0] == f.ai)
		{
			return aiWin;
		}
	}
	if (f.ppField[2][0] == f.ppField[1][1] && f.ppField[2][0] == f.ppField[0][2])
	{
		if (f.ppField[2][0] == f.player)
		{
			return playerWin;
		}
		else if (f.ppField[2][0] == f.ai)
		{
			return aiWin;
		}
	}
	for (size_t y = 0; y < 3; y++)
	{
		for (size_t x = 0; x < 3; x++)
		{
			if (f.ppField[y][x] != EMPTY)
			{
				m++;
			}
		}
	}
	if (m == 9)
	{
		return Tie;
	}
	return inProgress;
}
void playerTurn(Field& f)
{
	COODR c = { 0 };
	do
	{
		cout << endl;
		cout << " Enter row(1-3): ";
		cin >> c.y;
		c.y--;
		cout << " Enter column(1-3): ";
		cin >> c.x;
		c.x--;
	} while (!isLegal(f, c));
	f.ppField[c.y][c.x] = f.player;
	f.turn++;
}
void aiTurn(Field& f)
{
	for (size_t y = 0; y < 3; y++)
	{
		for (size_t x = 0; x < 3; x++)
		{
			if (f.ppField[y][x] == EMPTY)
			{
				f.ppField[y][x] = f.ai;
				if (isWon(f) == aiWin)
				{
					f.turn++;
					return;
				}
				f.ppField[y][x] = f.player;
				if (isWon(f) == playerWin)
				{
					f.ppField[y][x] = f.ai;
					f.turn++;
					return;
				}
				else
				{
					f.ppField[y][x] = EMPTY;
				}
				
			}

		}

	}

	
	if (f.ppField[1][1] == EMPTY)
	{
		f.ppField[1][1] = f.ai;
		f.turn++;
		return;
	}
	size_t slot = 0;
	size_t index = 0;

	srand(time(0));
	COODR c[4] = { 0 };
	if (f.ppField[0][0] == EMPTY)
	{
		c[slot] = { 0, 0 };
		slot++;
	}
	if (f.ppField[0][2] == EMPTY)
	{                        
		c[slot] = { 0, 2 };
		slot++;
	}
	if (f.ppField[2][0] == EMPTY)
	{
		c[slot] = { 2, 0 };
		slot++;
	}
	if (f.ppField[2][2] == EMPTY)
	{
		c[slot] = { 2, 2 };
		slot++;
	}
	if (slot != 0)
	{
		index = rand() % slot;
		if (f.ppField[c[index].y][c[index].x] == EMPTY)
		{
			f.ppField[c[index].y][c[index].x] = f.ai;
			f.turn++;
			return;
		}

	}
	slot = 0;
	index = 0;
	if (f.ppField[0][1] == EMPTY)
	{
		c[slot] = { 0, 1 };
		slot++;
	}
	if (f.ppField[1][2] == EMPTY)
	{
		c[slot] = { 1, 2 };
		slot++;
	}
	if (f.ppField[2][1] == EMPTY)
	{
		c[slot] = { 2, 1 };
		slot++;
	}
	if (f.ppField[1][0] == EMPTY)
	{
		c[slot] = { 1, 0 };
		slot++;
	}
	if (slot != 0)
	{
		index = rand() % slot;
		if (f.ppField[c[index].y][c[index].x] == EMPTY)
		{
			f.ppField[c[index].y][c[index].x] = f.ai;
			f.turn++;
			return;
		}

	}
}


int main()
{
	Field GameField;
	initGame(GameField);
	drawField(GameField);
	do
	{
		if (GameField.turn % 2 == 0)
		{
			playerTurn(GameField);
		}
		else
		{
			aiTurn(GameField);
		}
		system("cls");
		GameField.gameState = isWon(GameField);
		drawField(GameField);


	} while (GameField.gameState == inProgress);

	if (GameField.gameState == playerWin)
	{
		cout << endl;
		cout << " Congrats, You beat me!" << endl;
		cout << " Player Win";

	}
	else if (GameField.gameState == aiWin)
	{
		cout << endl;
		cout << " I'm  better than you, haha!" << endl;
		cout << " AI Win";
	}
	else if (GameField.gameState == Tie)
	{
		cout << endl;
		cout << " We have not winner" << endl;
		cout << " Tie!";
	}
	deinitGame(GameField);

	return 0;
}