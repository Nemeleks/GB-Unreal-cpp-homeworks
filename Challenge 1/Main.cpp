#include <iostream>
#include <Windows.h>
#include <string>
#include <vector>
#include <conio.h>
using namespace std;

typedef	struct sInputDir
{
	short y, x, q;
}tInputDir;

typedef struct sPosition
{
	double X, Y;
}tPosition;


HANDLE GetConsoleHandle()
{
	HANDLE h;
	h = GetStdHandle(STD_OUTPUT_HANDLE);
	return h;
}

void InvisibleCoursor()
{
	HANDLE h;
	CONSOLE_CURSOR_INFO structCursorInfo;
	h = GetConsoleHandle();
	if (h == INVALID_HANDLE_VALUE)
	{
		cout << "Error";
	}
	if (h != 0)
	{
		GetConsoleCursorInfo(h, &structCursorInfo);
		structCursorInfo.bVisible = FALSE;
		SetConsoleCursorInfo(h, &structCursorInfo);
	}

}
void Input(tInputDir* dir)
{
		if (GetAsyncKeyState('W') & 0x8000)
		{
			dir->y = -1;
		}
		else if (GetAsyncKeyState('S') & 0x8000)
		{
			dir->y = 1;
		}
		if (GetAsyncKeyState('A') & 0x8000)
		{
			dir->x = -1;
		}
		else if (GetAsyncKeyState('D') & 0x8000)
		{
			dir->x = 1;
		}
		if (GetAsyncKeyState('Q') & 0x8000)
		{
			dir->q = 1;
		}
}

void ResetDir(tInputDir* dir)
{
	dir->x = 0;
	dir->y = 0;
	dir->q = 0;
}

vector <vector <char> >  DrawMap(int w, int h)
{
	int width = w;
	int height = h;
	vector <vector <char> > arr(width, vector <char>(height));
	for (int i = 0; i < width; i++)//заполняем вектор пробелами и делаем границы
	{
		for (int j = 0; j < height; j++)
		{
			if (i == 2 || i == (width - 1) || (j == 0 && i >= 2) || (j == (height - 1) && i >= 2))
			{
				arr[i][j] = '+';
			}
			else
				arr[i][j] = ' ';
		}
	}
	for (int i = 9; i < 13; i++) // делаем препядствие
	{
		for (int j = 12; j < 16 ; j++)
		{
			arr[i][j] = '+';
		}
	}

	for (int i = 0; i < width; i++)//отрисовываем вектор
	{
		for (int j = 0; j < height; j++)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}
	return arr;
}

class Player
{
private:
	tPosition pos;
	double speed;

public:
	void SetCoords(short x, short y, vector <vector <char> > arr)
	{
		if (arr[(int)(pos.Y - 1)][(int)(pos.X + x * speed)] == ' ')
		{
			pos.X += x * speed;
		}
		if (arr[(int)(pos.Y - 1 + y * speed)][(int)pos.X] == ' ')
		{
			pos.Y += y * speed;
		}		
	}
	void SetXCoord(short x)
	{
		pos.X += x * speed;
	}
	COORD getCoord()
	{
		COORD coord;
		coord.X = (short)pos.X;
		coord.Y = (short)pos.Y;
		return coord;
	}
	void CreatePlayer(short x, short y, double speed)
	{
		pos.X = (double)x + 0.5;
		pos.Y = (double)y + 0.5;
		this->speed = speed;
	}
};

void Move(Player* player)
{
	static COORD coord;
	DWORD numberOfCharsWritten;
	
	
	if (!SetConsoleCursorPosition(GetConsoleHandle(), coord)) {
		cout << "Error in SetConsoleCursorPosition(), exited" << endl;
		return;
	}
	if (!WriteConsoleA(GetConsoleHandle(), " ", 1, &numberOfCharsWritten, NULL)) {
		cout << "Error in WriteConsole(), exited" << endl;
		return;
	}
	coord = player->getCoord();
	if (!SetConsoleCursorPosition(GetConsoleHandle(), coord)) {
		cout << "Error in SetConsoleCursorPosition(), exited" << endl;
		return;
	}
	if (!WriteConsoleA(GetConsoleHandle(), "@", 1, &numberOfCharsWritten, NULL)) {
		cout << "Error in WriteConsole(), exited" << endl;
		return;
	}
}

void gameRules()
{
	cout << " ################ Use WASD to move character ############## " << endl;
	cout << "###################### Press Q to exit #####################";
}

void GoToXY(short x, short y)
{
	COORD coord = { x, y };

	if (!SetConsoleCursorPosition(GetConsoleHandle(), coord))
	{
		cout << "error SetConsoleCoursorPosition()";
	}
}

int main()
{
	ULONGLONG now;
	ULONGLONG old;
	Player player;
	tInputDir dir;
	old = 0;
	int mapWidth;
	int mapHeight;
	mapWidth = 23;
	mapHeight = 60;
	player.CreatePlayer(10, 15, 0.5);
	InvisibleCoursor();
	vector <vector <char>> arr;
	gameRules();
	arr = DrawMap(mapWidth, mapHeight);


	do
	{
		now = GetTickCount64();
		ResetDir(&dir);
		Input(&dir);
		if (now - old > 20)
		{
			player.SetCoords(dir.x, dir.y, arr);

			Move(&player);
			old = now;
		}
		
	} while (dir.q != 1);

	GoToXY(0, (short)(mapWidth + 1));
	return 0;
}