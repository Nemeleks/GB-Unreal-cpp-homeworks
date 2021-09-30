#include "FullName.h"

bool operator==(FullName first, FullName other)
{
    return std::tie(first) == std::tie(other);
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
