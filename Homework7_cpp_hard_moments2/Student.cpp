#include "Student.h"

std::ostream& operator<<(std::ostream& out, const Student stud)
{
	return out << stud.Name << " Averange Score = " << stud.AverangeScore;
}
