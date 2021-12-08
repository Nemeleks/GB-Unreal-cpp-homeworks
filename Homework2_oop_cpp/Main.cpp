#include "Student.h"
#include "GrannySmith.h"
#include "Banana.h"
int main()

{
	std::vector<Student> students;
	students.push_back(Student("Mark", 25, "Male", 70, 2020));
	students.push_back(Student("Hellen", 20, "Female", 55, 2021));
	students.push_back(Student("Arthur", 31, "Male", 75, 2015));
	std::cout<<Student::getStudentCounter()<< std::endl;
	Student::searchStudent(students);

	Apple a("red");
	Banana b;
	GrannySmith c;

	std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
	std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
	std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";

	return 0;

}