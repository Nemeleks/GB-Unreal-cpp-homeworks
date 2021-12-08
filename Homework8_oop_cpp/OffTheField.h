#pragma once
#include <string>
class OffTheField
{
private:
	std::string m_robotDirection;
public:
	OffTheField(const std::string robotDirecton);
	std::string getRobotDirection() const;
};

