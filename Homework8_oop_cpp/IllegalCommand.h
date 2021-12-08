#pragma once
#include<string>
class IllegalCommand
{
private:
	std::string m_illegalCommand;
public:
	IllegalCommand(const std::string illegalCommand);
	std::string getIllegalCommand() const;
};

