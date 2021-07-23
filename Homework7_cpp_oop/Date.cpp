#include "Date.h"
#include <assert.h>

Date::Date() :
	m_day(0),
	m_month(0),
	m_year(0)
{
}

Date::Date(size_t day, size_t month, size_t year):
	m_day(day),
	m_month(month),
	m_year(year)
{
}

void Date::setDay(size_t day)
{
	m_day = day;
}

void Date::setMonth(size_t month)
{
	m_month = month;
}

void Date::setYear(size_t year)
{
	m_year = year;
}

size_t Date::getDay() const
{
	return m_day;
}

size_t Date::getMonth() const
{
	return m_month;
}

size_t Date::getYear() const
{
	return m_year;
}

Date Date::dateComparison(std::unique_ptr<Date>& date1, std::unique_ptr<Date>& date2)
{
	if (*date1 == *date2)
	{
		std::cerr << "Error. Date 1 and 2 is equal. ";	
	}
	if (*date1 < *date2)
	{
		return *date2;
	}
	else
	{
		return *date1;
	}
}

void Date::uPtrExchange(std::unique_ptr<Date>& date1, std::unique_ptr<Date>& date2)
{
	std::unique_ptr<Date> tmp;
	tmp = std::move(date1);
	date1 = std::move(date2);
	date2 = std::move(tmp);
}

std::ostream& operator<<(std::ostream& out, Date date)
{
	out << date.getDay() << "." << date.getMonth() << "." << date.getYear();
	return out;
}

bool operator==(const Date& date1, const Date& date2)
{
	if (date1.getDay() == date2.getDay() && date1.getMonth() == date2.getMonth() && date1.getYear() == date2.getYear() )
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool operator<(const Date& date1, const Date& date2)
{

	if (date1.getYear() < date2.getYear())
	{
		return true;
	}
	if (date1.getMonth() < date2.getMonth())
	{
		return true;
	}
	if (date1.getDay() < date2.getDay())
	{
		return true;
	}
	else
	{
		return false;
	}

}
