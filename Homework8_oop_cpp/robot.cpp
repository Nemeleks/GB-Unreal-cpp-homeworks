#include "robot.h"

robot::robot()
{
	field.reserve(MAX_FIELD_SIZE);
	for (size_t i = 0; i < MAX_FIELD_SIZE; i++)
	{		
		field.push_back(std::vector<std::string>(MAX_FIELD_SIZE, " "));		
	}
	field[1][0] = rob;
	printField();
	robotPosition = GetRobotPosition();
}
robot::~robot()
{
	std::cout << "destructor";
	std::vector<std::vector<std::string>>().swap(field);
}
void robot::getCommand(std::string& command)
{
	coord newPosition = GetRobotPosition();
	if (command == "left")
	{
		if (GetRobotPosition().x-1 <0)
		{
			throw OffTheField(command);
		}
		else
		{
			field[robotPosition.y][robotPosition.x] = " ";
			robotPosition.x--;
			field[robotPosition.y][robotPosition.x] = rob;
		}
	}
	else if (command == "right")
	{
		if (GetRobotPosition().x + 1 > 9)
		{
			throw OffTheField(command);
		}
		else
		{
			field[robotPosition.y][robotPosition.x] = " ";
			robotPosition.x++;
			field[robotPosition.y][robotPosition.x] = rob;
		}
		
	}
	else if (command == "up")
	{

		if (GetRobotPosition().y -1 < 0)
		{
			throw OffTheField(command);
		}
		else
		{
			field[robotPosition.y][robotPosition.x] = " ";
			robotPosition.y--;
			field[robotPosition.y][robotPosition.x] = rob;
		}
		
	}
	else if (command == "down")
	{
		if (GetRobotPosition().y + 1 > 9)
		{
			throw OffTheField(command);
		}
		else
		{
			field[robotPosition.y][robotPosition.x] = " ";
			robotPosition.y++;
			field[robotPosition.y][robotPosition.x] = rob;
		}		
	}
	else if (command == "exit")
	{
		return;
	}
	else
	{
		throw IllegalCommand(command);
	}
}
coord robot::GetRobotPosition()
{
	for (int i = 0; i < MAX_FIELD_SIZE; i++)
	{
		for (int j = 0; j < MAX_FIELD_SIZE; j++)
		{
			if (field[j][i] == rob)
			{
				robotPosition = { j,i };
				return robotPosition;
			}
		}
	}
}
void robot::playRobot()
{
	std::string command;
	do
	{

		std::cout << "Enter a command for the Robot. left, right, up or down for move robot and exit for close program: ";
		std::getline(std::cin, command);
		try
		{
			getCommand(command);
		}
		catch (OffTheField ex)
		{
			std::cerr << "Error. The robot is trying to go out of the field. Now the robot at position |x=" << robotPosition.x+1 << ", y=" << robotPosition.y+1 << "| and try to move " << ex.getRobotDirection() <<". Try to enter new command."<<std::endl;
			system("pause");
		}
		catch (IllegalCommand ex)
		{
			std::cerr << "Error. Command '" << ex.getIllegalCommand() << "' is illegal. Try again" << std::endl;
			system("pause");
		}

		system("cls");
		printField();
	} while (command != "exit");

}
void robot::setPositionY(int pos)
{
	robotPosition.y = pos;
}
void robot::printField()
{
	std::cout << "------------" << std::endl;
	
	for (size_t i = 0; i < MAX_FIELD_SIZE; i++)
	{
		for (size_t j = 0; j < MAX_FIELD_SIZE; j++)
		{
			if (j==0)
			{
				std::cout << "|"<<field[i][j];
			}
			else if (j==MAX_FIELD_SIZE-1)
			{
				std::cout << field[i][j]<<"|";
			}
			else
			{
				std::cout << field[i][j];
			}
			
		}
		std::cout << std::endl;
	}
	std::cout << "------------" << std::endl;
}
