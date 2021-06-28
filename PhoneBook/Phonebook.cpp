#include "Phonebook.h"




Phonebook::Phonebook()
	:
	contact_index(0)
{
	menu();
}

void Phonebook::menu()
{
	do
	{
		std::cout << "Type ADD for add contact, SEARCH for search contact or EXIT for close phonebook" << std::endl;
		std::cin >> msg;
		if (msg == "ADD")
		{
			addContact();
		}
		else if (msg == "SEARCH")
		{
			searchContact();
		}
		else if (msg == "DISPLAY")
		{
			int _index;
			std::cout << " index : ";
			std::cin >> _index;
			displayContact(_index);

		}
		else if (msg == "EXIT")
		{
			return;
		}

	} while (msg != "ADD" || msg != "SEARCH" || msg != "EXIT" || msg != "DISPLAY");
}

void Phonebook::addContact()
{
	if (contact_index == MAX_CONTACTS)
	{
		contact_index = 0;
	}
	std::cin.clear();
	std::cin.ignore(32767, '\n');
	contacts[contact_index].fillContact();
	contact_index++;
}

void Phonebook::searchContact()
{
	std::cout << std::setw(45) << std::setfill('-')<< "-" << std::endl;
	std::cout << std::setfill(' ') <<  "|";
	std::cout.width(10);
	std::cout << std::right 
		<< "Index" << "|";
	std::cout.width(10);
	std::cout << std::right 
		<< "First Name" << "|";
	std::cout.width(10);
	std::cout << std::right 
		<< "Last Name"<< "|";
	std::cout.width(10);
	std::cout << std::right
		<< "Nickname" << "|" << std::endl;
	std::cout << std::setw(45) << std::setfill('-') << "-" << std::endl;
	std::cout << std::setfill(' ');

	for (size_t i = 0; i < MAX_CONTACTS; i++)
	{
		std::cout << "|";
		std::cout.width(10);
		std::cout << std::setfill(' ') << std::right
			<< i+1<< "|";
		std::cout.width(10);
		std::cout << std::right
			<< contacts[i].getFirstName() << "|";
		std::cout.width(10);
		std::cout << std::right
			<< contacts[i].getLastName() << "|";
		std::cout.width(10);
		std::cout << std::right
			<< contacts[i].getNickname() << "|";
		std::cout << std::endl;


	}
}

void Phonebook::displayContact(int _index)
{
	std::cout << "First name : " << contacts[_index].getFirstName() << std::endl;
	std::cout << "Last name : " << contacts[_index].getLastName() << std::endl;
	std::cout << "Nickname : " << contacts[_index].getNickname() << std::endl;
	std::cout << "Login : " << contacts[_index].getLogin() << std::endl;
	std::cout << "Postal Adress : " << contacts[_index].getPostalAdress() << std::endl;
	std::cout << "Email : " << contacts[_index].getEmail() << std::endl;
	std::cout << "Phone Number : " << contacts[_index].getPhoneNumber() << std::endl;
	std::cout << "Birthday : " << contacts[_index].getBirthday() << std::endl;
	std::cout << "FavouriteMeal : " << contacts[_index].getFavouriteMeal() << std::endl;
	std::cout << "UnderwearColor : " << contacts[_index].getUnderwearColor() << std::endl;
	std::cout << "DarkestSecret : " << contacts[_index].getDarkestSecret() << std::endl;
}

void Phonebook::exit()
{
}
