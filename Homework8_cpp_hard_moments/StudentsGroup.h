#pragma once
#include "Student.h"
#include <fstream>
#include "IRepository.h"
#include "IMethods.h"
class StudentsGroup : public IRepository, public IMethods
{
private:
	std::vector<Student> StudGroup;
public:
	StudentsGroup(std::vector<Student> _StudGroup) :
		StudGroup(_StudGroup)
	{

	}

	std::string GetAllInfo() override
	{
		std::string AllInfo;
		for (size_t i = 0; i < StudGroup.size(); i++)
		{
			AllInfo += StudGroup[i].getFullName().getFName() + " AverangeScore = " + std::to_string(StudGroup[i].getAverangeScore()) + "\n";
		}
		return AllInfo;
	}

	double GetAverageScore(const FullName& name) override
	{

		for (size_t i = 0; i < StudGroup.size(); i++)
		{
			if (StudGroup[i].getFullName() == name)
			{
				return StudGroup[i].getAverangeScore();
			}
		}
		return 0;
	}

	std::string GetAllInfo(const FullName& name) override
	{
		std::string AllInfo;
		for (size_t i = 0; i < StudGroup.size(); i++)
		{
			if (StudGroup[i].getFullName() == name)
			{
				AllInfo = StudGroup[i].getFullName().getFName() + " AverangeScore = " + std::to_string(StudGroup[i].getAverangeScore());
				return AllInfo;
			}
		}
		return AllInfo;
	}

	void Save() override
	{
		std::ofstream out("StudenstGroup.bin", std::ios::binary);
		out.write(GetAllInfo().c_str(), GetAllInfo().size());
	}

	void Open() override
	{
		std::string result;
		std::ifstream in("StudenstGroup.bin", std::ios::binary);

		result.resize(GetAllInfo().size());
		in.read(&result[0], result.size());
		result.resize(in.gcount());

		std::cout << result;
	}
};

