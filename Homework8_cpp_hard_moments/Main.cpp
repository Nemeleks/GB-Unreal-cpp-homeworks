#include <iostream>
#include "StudentsGroup.h"
#include <gtest/gtest.h>

template <typename T>
T min_el(std::vector<T> v) {
	return *min_element(begin(v), end(v));
}
template <typename T>
T max_el(std::vector<T> v) {
	return *max_element(begin(v), end(v));
}

FullName StudentName(Student stud)
{
	return stud.getFullName();
}


TEST(StudentFullName, StudentName)
{
	std::vector<int> Scores{ 4,2,7,3,5,3,3,1 };

	Student First(FullName("Ivan", "Ivanovich", "Ivanov"), Scores);
	FullName Ivan("Ivan", "Ivanovich", "Ivanov");
	ASSERT_EQ(Ivan, StudentName(First));

	Student Second(FullName("Petr", "Petrovich", "Petrov"), Scores);
	FullName Petr("Petr", "Petrovich", "Petrov");
	ASSERT_EQ(Petr, StudentName(Second));
}


int main(int argc, const char** argv) {
	testing::InitGoogleTest();
	return RUN_ALL_TESTS();
}