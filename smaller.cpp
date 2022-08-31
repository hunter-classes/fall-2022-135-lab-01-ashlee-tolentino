/*
Author: Ashlee Tolentino
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab1A

This program asks the user to input two integer numbers and then prints out the smaller of the two.
*/

#include <iostream>

int main() 
{
	std::cout << "Enter the first number: " << std::endl;
	int num1;
	std::cin >> num1;
	
	std::cout << "Enter the second number: " << std::endl;
	int num2;
	std::cin >> num2;

	if (num1 < num2)
	{
		std::cout << "The smaller of the two is " << num1 << std::endl;
	}
	else
	{
		std::cout << "The smaller of the two is " << num2 << std::endl;
	}

	return 0;
}