#include "Student.h"

Student::Student(std::string _name, unsigned short _age, std::string _sex, unsigned short _weight, unsigned _yearOfEdu) :
	Person(_name, _age, _sex, _weight),
	yearOfEdu(_yearOfEdu)
{
	studentCounter++;
}

void Student::setYearOfEdu(unsigned _yearOfEdu)
{
	yearOfEdu = _yearOfEdu;
}

unsigned Student::getYearOFEdu() const
{
	return yearOfEdu;
}

void Student::searchStudent(std::vector<Student>& students)
{
	std::string studentName;
	std::cout << "Students list:" << std::endl;
	for (size_t i = 0; i < students.size(); i++)
	{
		std::cout << i + 1 << " " << students[i].getName() << std::endl;
	}
	do
	{
		std::cout << "Enter student name for see Student Card: ";
		std::getline(std::cin, studentName);
		for (size_t i = 0; i < students.size(); i++)
		{
			if (students[i].getName() == studentName)
			{
				students[i].printStudent();
				return;	
			}
		}
		std::cout << "Student with name " << studentName << " not found, try again" << std::endl;

	} while (true);

}

size_t Student::getStudentCounter()
{
	return studentCounter;
}

void Student::printStudent()
{
	std::cout << "Student name: " << getName() << std::endl;
	std::cout << "Student age: " <<getAge() << std::endl;
	std::cout << "Student sex: " << getSex() << std::endl;
	std::cout << "Student weight: " << getWeight() << std::endl;
	std::cout << "Student year of education: " << getYearOFEdu() << std::endl;
}

size_t Student::studentCounter = 0;
