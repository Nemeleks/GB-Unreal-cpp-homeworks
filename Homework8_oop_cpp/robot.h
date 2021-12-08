#pragma once
#include <vector>
#include <string>
#include<iostream>
#include "OffTheField.h"
#include "IllegalCommand.h"

constexpr int MAX_FIELD_SIZE = 10;
struct coord
{
	int y;
	int x;
};
class robot
{
private:
	std::vector<std::vector<std::string>> field;
	const std::string rob = "R";
	coord robotPosition;
public:
	robot();
	~robot();
	void printField();
	void getCommand(std::string& command);
	coord GetRobotPosition();
	void playRobot();
	void setPositionY(int pos);

};

