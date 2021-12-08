#pragma once
#include "Person.h"
class Student :
    public Person
{
private:
    unsigned yearOfEdu;
    static size_t studentCounter;
public:

    Student(std::string _name, unsigned short _age, std::string _sex, unsigned short _weight, unsigned _yearOfEdu);
    

    void setYearOfEdu(unsigned _yearOfEdu);
    void printStudent();
    unsigned getYearOFEdu() const;
    static void searchStudent(std::vector<Student>& students);
    static size_t getStudentCounter();


};

