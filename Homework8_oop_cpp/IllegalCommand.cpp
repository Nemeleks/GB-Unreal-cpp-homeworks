#include "IllegalCommand.h"

IllegalCommand::IllegalCommand(const std::string illegalCommand):
	m_illegalCommand(illegalCommand)
{
}

std::string IllegalCommand::getIllegalCommand() const
{
	return m_illegalCommand;
}
