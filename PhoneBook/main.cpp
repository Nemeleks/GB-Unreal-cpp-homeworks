#include <iostream>
#include "Contacts.h"

int main()
{
	Contacts cont;
	cont.fillContact();

	std::cout << "First name : " << cont.getFirstName() << std::endl;
	std::cout << "Last name : " << cont.getLastName() << std::endl;
	std::cout << "Nickname : " << cont.getNickname() << std::endl;
	std::cout << "Login : " << cont.getLogin() << std::endl;
	std::cout << "Postal Adress : " << cont.getPostalAdress() << std::endl;
	std::cout << "Email : " << cont.getEmail() << std::endl;




}