#include "OffTheField.h"

OffTheField::OffTheField(std::string robotDirecton):
	m_robotDirection(robotDirecton)
{
	
}

std::string OffTheField::getRobotDirection() const
{
	return m_robotDirection;
}
