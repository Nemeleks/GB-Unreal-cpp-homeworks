#pragma once
#include <iostream>
#include <string>
#include <tuple>
class FullName
{
private:
	std::string FirstName;
	std::string MiddleName;
	std::string LastName;
public:
	FullName(std::string _firstName, std::string _middleName, std::string _lastName ) :
		FirstName(_firstName),
		MiddleName(_middleName),
		LastName(_lastName)
	{}
	FullName(std::string _firstName, std::string _lastName) :
		FirstName(_firstName),
		LastName(_lastName)
	{}

	std::string getFName()
	{
		if (MiddleName.empty())
		{
			return FirstName + " " + LastName + " ";
		}
		else
		{
			return FirstName + " " + MiddleName + " " + LastName + " ";
		}
	}

	friend bool operator == (FullName first, FullName other);


	friend std::ostream& operator <<(std::ostream& out, const FullName& name);
};

