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
	fillField("Phone Number", &Contacts::setPhoneNumber);
	fillField("Birthday", &Contacts::setBirthday);
	fillField("FavouriteMeal", &Contacts::setFavouriteMeal);
	fillField("UnderwearColor", &Contacts::setUnderwearColor);
	fillField("DarkestSecret", &Contacts::setDarkestSecret);
	system("cls");
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

bool Contacts::setPhoneNumber(const std::string str)
{
	std::string correctValuels = "+1234567890";
	if (str.find_first_not_of(correctValuels) == std::string::npos)
	{
		for (size_t i = 1; i < str.size(); i++)
		{
			if (str[i] == '+')
			{
				std::cout << "Wrong Phone Number. Use only + and digits" << std::endl;
				return false;
			}
		}
		phoneNumber = str;	
		return true;
	}
	else
	{
		std::cout << "Wrong Phone Number. Use only + and digits" << std::endl;
		return false;
	}

}

bool Contacts::setBirthday(const std::string str)
{
	std::string correctValues = "1234567890.";
	
	if (str.find_first_not_of(correctValues) == std::string::npos && str.size() == 10)
	{
		if (str[0] != '.' && str[1] != '.' && str[2] == '.'&& str[3] != '.' && str[4] != '.' && str[5] == '.'&&str[6] != '.' && str[7] != '.' && str[8] != '.' && str[9] != '.')
		{
			birthday = str;
			return true;
		}
		else
		{
			std::cout << "Wrong Birthday. Use XX.XX.XXXX format please." << std::endl;
			return false;
		}
	}
	else
	{
		std::cout << "Wrong Birthday. Use XX.XX.XXXX format please." << std::endl;
		return false;
	}
}

bool Contacts::setFavouriteMeal(const std::string str)
{
	favouriteMeal = str;
	return true;
}

bool Contacts::setUnderwearColor(const std::string str)
{
	underwearColor = str;
	return true;
}

bool Contacts::setDarkestSecret(const std::string str)
{
	darkestSecret = str;
	return true;
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

std::string Contacts::getPhoneNumber() const
{
	return phoneNumber;
}
std::string Contacts::getBirthday() const
{
	return birthday;
}
std::string Contacts::getFavouriteMeal() const
{
	return favouriteMeal;
}
std::string Contacts::getUnderwearColor() const
{
	return underwearColor;
}
std::string Contacts::getDarkestSecret() const
{
	return darkestSecret;
}