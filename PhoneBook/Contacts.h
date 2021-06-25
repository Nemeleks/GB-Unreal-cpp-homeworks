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
	void fillField(const std::string &msg, bool (Contacts::*f)(std::string str));
	void fillContact();
	std::string fill(const std::string msg);
	std::string deleteSpaces(std::string str);

	bool setFirstName(const std::string str);
	bool setLastName(const std::string str);
	bool setNickname(const std::string str);
	bool setLogin(const std::string str);
	bool setPostalAdress(const std::string str);
	bool setEmail(const std::string str);
	bool setPhoneNumber();
	bool setBirthday();
	bool setFavouriteMeal();
	bool setUnderwearColor();
	bool setDarkestSecret();

	static void print();

	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickname() const;
	std::string getLogin() const;
	std::string getPostalAdress() const;
	std::string getEmail() const;

};

