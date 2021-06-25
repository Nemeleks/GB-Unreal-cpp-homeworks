#include "Contacts.h"

void Contacts::fillField(const std::string &msg, bool(Contacts::* f)(std::string msg))
{
	do
	{

	} while (!(this->*f)(fill(msg)));
}

void Contacts::fillContact()
{
	fillField("First Name", &Contacts::setFirstName);
	fillField("Last Name", &Contacts::setLastName);
	fillField("Nickname", &Contacts::setNickname);
	fillField("Login", &Contacts::setLogin);
	fillField("Postal Adress", &Contacts::setPostalAdress);
	fillField("Email", &Contacts::setEmail);
}

std::string Contacts::deleteSpaces(std::string str)
{
	int from = 0;
	int to = 0;
	std::string strWOSpaces = "";
	for (size_t i = 0; i < str.size(); ++i)
	{
		if (str[i] != ' ')
		{
			from = i;
			break;
		}
	}
	for (size_t i = str.size(); i > 0; i--)
	{
		if (str[i] != ' ')
		{
			to = i;
			break;
		}
	}
	strWOSpaces.resize(to - from);
	for (size_t i = from, j = 0; i <= to; i++, j++)
	{
		strWOSpaces[j] += str[i];
	}
	return strWOSpaces;
}

std::string Contacts::fill(const std::string msg)
{
	std::string str;
	do
	{
	std::cout << "Enter " << msg << " : ";
	std::getline(std::cin, str);
	} while (str.empty());
	
	return deleteSpaces(str);
}
bool Contacts::setFirstName(const std::string str)
{
	for (size_t i = 0; i < str.size(); i++)
	{
		if (!isalpha(str[i]))
		{
			std::cout << "Wrong first name! Use only letters, please!" << std::endl;
			return false;
		}
	}

	firstName = str;
	return true;
}

bool Contacts::setLastName(const std::string str)
{
	for (size_t i = 0; i < str.size(); i++)
	{
		if (!isalpha(str[i]))
		{
			std::cout << "Wrong Last name! Use only letters, please!" << std::endl;
			return false;
		}
	}

	lastName = str;
	return true;
}

bool Contacts::setNickname(const std::string str)
{
	if (str.find(' ') != std::string::npos)
	{
		std::cout << "Wrong Nickname! Dont use spaces!" << std::endl;
		return false;
	}

	nickname = str;
	return true;
}

bool Contacts::setLogin(const std::string str)
{

	if (str.find(' ') != std::string::npos)
	{
		std::cout << "Wrong Login! Dont use spaces!" << std::endl;
		return false;
	}
	login = str;
	return true;
}

bool Contacts::setPostalAdress(const std::string str)
{
	postalAdress = str;
	return true;
}

bool Contacts::setEmail(const std::string str)
{
	int dogPoint = 0;
	if (str.find(' ') != std::string::npos)
	{
		std::cout << "Wrong Email! Dont use spaces!" << std::endl;
		return false;
	}
	if (str.find('@') != std::string::npos)
	{
		for (size_t i = 0; i < str.size(); i++)
		{
			if (str[i] == '@')
			{
				dogPoint = i;
				break;
			}

		}
	}
	else
	{
		std::cout << "Wrong Email format. Need a dog." << std::endl;
		return false;
	}
	//std::cout << dogPoint << std::endl;
	if (str.find('.',dogPoint+2) != std::string::npos)
	{
		if (str.back() != '.')
		{
			email = str;
			return true;
		}
		else
		{
			std::cout << "Wrong Email format. Need something after point." << std::endl;
			return false;
		}

	}
	else
	{
		std::cout << "Wrong Email format. Need a point ." << std::endl;
		return false;
	}
}

bool Contacts::setPhoneNumber()
{
	return false;
}

bool Contacts::setBirthday()
{
	return false;
}

bool Contacts::setFavouriteMeal()
{
	return false;
}

bool Contacts::setUnderwearColor()
{
	return false;
}

bool Contacts::setDarkestSecret()
{
	return false;
}

void Contacts::print()
{
	std::cout << "Hi" << std::endl;
}

std::string Contacts::getFirstName() const
{
	return firstName;
}

std::string Contacts::getLastName() const
{
	return lastName;
}

std::string Contacts::getNickname() const
{
	return nickname;
}

std::string Contacts::getPostalAdress() const
{
	return postalAdress;
}

std::string Contacts::getLogin() const
{
	return login;
}

std::string Contacts::getEmail() const
{
	return email;
}
