#pragma once
#include <iostream>
#include <memory>
class Date
{
private:
	size_t m_day;
	size_t m_month;
	size_t m_year;
public:
	Date();
	Date(size_t day, size_t month, size_t year);

	void setDay(size_t day);
	void setMonth(size_t month);
	void setYear(size_t year);

	size_t getDay() const;
	size_t getMonth() const;
	size_t getYear() const;

	static Date dateComparison(std::unique_ptr<Date>& date1, std::unique_ptr<Date>& date2);
	static void uPtrExchange(std::unique_ptr<Date>& date1, std::unique_ptr<Date>& date2);

	friend std::ostream& operator<<(std::ostream& out, Date date);
	friend bool operator== (const Date& date1, const Date& date2);
	friend bool operator<(const Date& date1, const Date& date2);
};

