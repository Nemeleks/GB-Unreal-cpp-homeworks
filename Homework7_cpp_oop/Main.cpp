#include "Date.h"

int main()
{
	std::unique_ptr<Date> today = std::make_unique<Date>(23, 07, 2021);
	std::unique_ptr<Date> date;
	std::cout << "Day: " << today->getDay() << std::endl;
	std::cout << "Month: " << today->getMonth() << std::endl;
	std::cout << "Year: " << today->getYear() << std::endl;
	std::cout << *today << std::endl;;
	date = std::move(today);
	if (today == nullptr)
	{
		std::cout << "today is nulltr" << std::endl;
	}
	else
	{
		std::cout << "today is NOT nulltr" << std::endl;
	}
	if (date == nullptr)
	{
		std::cout << "date is nulltr" << std::endl;
	}
	else
	{
		std::cout << "date is NOT nulltr" << std::endl;
	}

	std::unique_ptr<Date> date1 = std::make_unique<Date>(25, 10, 2032);
	std::unique_ptr<Date> date2 = std::make_unique<Date>(27, 10, 2032);

	std::cout << "Late date among " << *date1 << " and " << *date2 << " is: " << Date::dateComparison(date1, date2) << std::endl;;

	std::cout << "date1: " << *date1 << ", date2: " << *date2 << std::endl;
	Date::uPtrExchange(date1, date2);
	std::cout << "date ptrs after swap: " << "date1: " << *date1 << ", date2: " << *date2 << std::endl;

	return 0;
}