#include "robot.h"

robot::robot()
{
	field.reserve(MAX_FIELD_SIZE);
	for (size_t i = 0; i < MAX_FIELD_SIZE; i++)
	{		
		field.push_back(std::vector<std::string>(MAX_FIELD_SIZE, "0"));		
	}
	field[6][5] = rob;
	robotPosition = GetRobotPosition();
	printField();
}
void robot::getCommand(std::string& command)
{
	if (command == "a")
	{
		robotPosition.x--;
	}
	else if (command == "d")
	{
		robotPosition.x++;
	}
	else if (command == "w")
	{
		robotPosition.y--;
	}
	else if (command == "s")
	{
		robotPosition.y++;
	}
}
coord robot::GetRobotPosition()
{
	for (int i = 0; i < MAX_FIELD_SIZE; i++)
	{
		for (int j = 0; j < MAX_FIELD_SIZE; j++)
		{
			if (field[i][j] == rob)
			{
				robotPosition = { i,j };
				return robotPosition;
			}
		}
	}
}
void robot::printField()
{
	
	for (size_t i = 0; i < MAX_FIELD_SIZE; i++)
	{
		for (size_t j = 0; j < MAX_FIELD_SIZE; j++)
		{
			std::cout << field[i][j];
		}
		std::cout << std::endl;
	}
}
