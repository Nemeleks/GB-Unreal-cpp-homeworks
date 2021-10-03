#pragma once
#include <vector>
#include "FullName.h"


class Student
{
private:
	const FullName Name;
	std::vector<int> Scores;
	double AverangeScore;

public:

	Student(const FullName& _Name, std::vector<int> _Scores) :
		Name(_Name),
		Scores(_Scores),
		AverangeScore(calcAverangeScore(_Scores))
	{

	}

	double calcAverangeScore(std::vector<int> _Scores)
	{
		double av = 0;
		for (size_t i = 0; i < _Scores.size(); i++)
		{
			av += _Scores[i];
		}
		av /= _Scores.size();
		return av;
	}

	FullName getFullName() { return Name; };
	double getAverangeScore() { return AverangeScore; };

	friend std::ostream& operator <<(std::ostream& out, const Student stud);
};