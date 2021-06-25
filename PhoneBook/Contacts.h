#pragma once
#include <iostream>
#include <string>

constexpr auto MAX_CONTACTS = 8;
class Contacts
{
private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string login;
	std::string postalAdress;
	std::string email;
	std::string phoneNumber;
	std::string birthday;
	std::string favouriteMeal;
	std::string underwearColor;
	std::string darkestSecret;

public:
	void add(std::string)
	{
		std::cout << "Enter First Name : " << std::endl;
		bool result = true;
		do
		{
			std::cin >> firstName;
			for (size_t i = 0; i < firstName.size(); i++)
			{
				if (!isalpha(firstName[i]))
				{
					std::cout << "Wrong first name! Use only letters, please!" << std::endl;
					result = false;
					break;
				}
			}

		} while (result == false);

		std::cout << "Enter Last Name : " << std::endl;
		do
		{
			std::cin >> lastName;
			for (size_t i = 0; i < lastName.size(); i++)
			{
				if (!isalpha(lastName[i]))
				{
					std::cout << "Wrong  last name! Use only letters, please!" << std::endl;
					result = false;
					break;
				}
			}
		} while (result == false);
		
		std::cout << "Enter Nickname : " << std::endl;
		do
		{
			std::cin >> nickname;
			if (nickname.find(" "))
			{
				std::cout << "Wrong  nickname! Dont use spaces!" << std::endl;
				result = false;
			}
			
		} while (result == false);

		std::cout << "Enter login : " << std::endl;
		do
		{
			std::cin >> login;
			if (login.find(" "))
			{
				std::cout << "Wrong  login! Dont use spaces!" << std::endl;
				result = false;
			}

		} while (result == false);
	}

};

