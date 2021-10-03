#include "FullName.h"

bool operator==(FullName first, FullName other)
{
	if (first.FirstName == other.FirstName && first.LastName == other.LastName && first.MiddleName == other.MiddleName)
	{
		return true;
	}
	return false;
}

std::ostream& operator<<(std::ostream& out,const FullName& name)
{
    if (name.MiddleName.empty())
    {
        return out << name.FirstName<< " " << name.LastName << " ";
    }
    else
    {
        return out << name.FirstName << " " << name.MiddleName << " " << name.LastName << " ";
    }
}
