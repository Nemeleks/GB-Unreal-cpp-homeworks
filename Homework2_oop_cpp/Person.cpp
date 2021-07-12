#include "Person.h"

Person::Person(std::string _name, unsigned short _age, std::string _sex, unsigned short _weight) :
	name(_name),
	age(_age),
	sex(_sex),
	weight(_weight)
{}

void Person::setName(std::string _name)
{
	name = _name;
}

void Person::setAge(unsigned short _age)
{
	age = _age;
}

void Person::setWeight(unsigned short _weight)
{
	weight = _weight;
}

std::string Person::getName() const
{
	return name;
}

unsigned short Person::getAge() const
{
	return age;
}

std::string Person::getSex() const
{
	return sex;
}

unsigned short Person::getWeight() const
{
	return weight;
}
