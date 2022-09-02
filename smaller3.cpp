/*
Author: Ashlee Tolentino
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab1B

This program asks the user to input three integer numbers and then prints out the smallest of the three.
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

	std::cout << "Enter the third number: " << std::endl;
	int num3;
	std::cin >> num3;

	if (num1 < num2 && num1 < num3)
	{
		std::cout << "The smaller of the three is " << num1 << std::endl;
	}
	else if (num2 < num1 && num2 < num3)
	{
		std::cout << "The smaller of the three is " << num2 << std::endl;
	}
	else
	{
		std::cout << "The smaller of the three is " << num3 << std::endl;
	}

	return 0;
}