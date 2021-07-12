#pragma once
#include <iostream>
#include <string>
#include <vector>
class Person
{
protected:
	std::string name;
	unsigned short age;
	std::string sex;
	unsigned short weight;

public:
	Person(std::string _name, unsigned short _age, std::string _sex, unsigned short _weight);
	
	void setName(std::string _name);
	void setAge(unsigned short _age);
	void setWeight(unsigned short _weight);

	std::string getName() const;
	unsigned short getAge() const;
	std::string getSex() const;
	unsigned short getWeight() const;
};

