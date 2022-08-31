/*
Author: Ashlee Tolentino
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab1D

This program asks the user to input the year and the month (1-12) and then prints the number of days in that month (taking into account leap years)
*/

#include <iostream>

bool leap(int y)	//true = leap year; false = common year
{
	if (y % 4 != 0)
	{
		return false;
	}
	else if (y % 100 != 0)
	{
		return true;
	}
	else if (y % 400 != 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}

int main() 
{
	std::cout << "Enter year: " << std::endl;
	int year;
	std::cin >> year;
	
	std::cout << "Enter month: " << std::endl;
	int month;
	std::cin >> month;

	bool ans = leap(year);
	const int MAX_DAYS = 31;

	if(month == 2)
	{
		if(ans == true)
		{
			std::cout << MAX_DAYS - 2 << " days" << std::endl;
		}
		else
		{
			std::cout << MAX_DAYS - 3 << " days" << std::endl;
		}
	}
	else if(month <= 7)
	{
		if(month % 2 == 1)
		{
			std::cout << MAX_DAYS << " days" << std::endl;
		}
		else
		{
			std::cout << MAX_DAYS - 1 << " days" << std::endl;
		}
	}
	else
	{
		if(month % 2 == 1)
		{
			std::cout << MAX_DAYS - 1 << " days" << std::endl;
		}
		else
		{
			std::cout << MAX_DAYS << " days" << std::endl;
		}
	}

	return 0;
}