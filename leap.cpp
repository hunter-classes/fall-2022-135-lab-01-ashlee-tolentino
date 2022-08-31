/*
Author: Ashlee Tolentino
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab1C

This program asks the user to input an integer representing a year number. If the input year is a leap year, it should print "Leap year", otherwise, it prints "Common year".
*/

#include <iostream>

int main() 
{
	std::cout << "Enter year: " << std::endl;
	int year;
	std::cin >> year;

	if (year % 4 != 0)
	{
		std::cout << "Common year" << std::endl;
	}
	else if (year % 100 != 0)
	{
		std::cout << "Leap year" << std::endl;
	}
	else if (year % 400 != 0)
	{
		std::cout << "Common year" << std::endl;
	}
	else
	{
		std::cout << "Leap year" << std::endl;
	}
	
	return 0;
}