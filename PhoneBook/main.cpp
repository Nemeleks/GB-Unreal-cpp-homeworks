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
	std::cout << "Phone Number : " << cont.getPhoneNumber() << std::endl;
	std::cout << "Birthday : " << cont.getBirthday() << std::endl;
	std::cout << "FavouriteMeal : " << cont.getFavouriteMeal() << std::endl;
	std::cout << "UnderwearColor : " << cont.getUnderwearColor() << std::endl;
	std::cout << "DarkestSecret : " << cont.getDarkestSecret() << std::endl;


}