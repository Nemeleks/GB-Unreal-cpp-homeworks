#pragma once
#include "FullName.h"

class IMethods {
	virtual double GetAverageScore(const FullName& name) = 0;
	virtual std::string GetAllInfo(const FullName& name) = 0;
	virtual std::string GetAllInfo() = 0;
};
