#include <iostream>
#include <string>
#include <fstream>
#include "Students.pb.h"

int main()
{
	// SERIALIZE
	//stud::FullName asd;
	//asd.set_firstname("asd");
	//asd.set_lastname("jhkj");

	//stud::FullName* qwe = new stud::FullName;
	//qwe->set_firstname("qwe");
	//qwe->set_middlename("qwe");
	//qwe->set_lastname("qwe");

	stud::Student ttt;

	// SERIALIZE
	//ttt.set_allocated_fname(qwe);
	//ttt.add_scores(5);
	//ttt.add_scores(2);
	//ttt.add_scores(3);
	//int av = 0;

	//for (size_t i = 0; i < ttt.scores_size(); i++)
	//{
	//	av += ttt.scores().Get(i);
	//}

	//ttt.set_averangescore(av);

	//std::cout << ttt.fname().firstname() << ttt.fname().middlename() << ttt.fname().lastname() << ttt.averangescore();

	//DESERIALIZE
	std::ifstream in("/Users/Professional/source/repos/Homework7_cpp_hard_moments/Student.bin", std::ios_base::binary);
	
	if (ttt.ParseFromIstream(&in))
	{
		std::cout << ttt.fname().firstname() << ttt.fname().middlename() << ttt.fname().lastname() << ttt.averangescore();
	}
	else
	{
		std::cout << "Error!";
	}


}