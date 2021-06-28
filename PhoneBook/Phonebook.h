#pragma once
#include <iostream>
#include <string>
#include "Contacts.h"
#include <iomanip>

constexpr auto MAX_CONTACTS = 8;
class Phonebook
{
private:
	short contact_index;
	Contacts contacts[MAX_CONTACTS];
	std::string msg;
	
public:
	Phonebook();
	void menu();
	void addContact();
	void searchContact();
	void displayContact(int _index);
	void exit();


};

