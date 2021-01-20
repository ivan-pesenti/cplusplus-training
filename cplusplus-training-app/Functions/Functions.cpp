// Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int getValueFromUser() 
{
	std::cout << "Enter an integer: ";
	int userInput{};
	std::cin >> userInput;
	return userInput;
}

void printDouble(int value)
{
	std::cout << "The number " << value << " doubled is: " << value * 2 << '\n';
}

int main()
{
	int num{ getValueFromUser() }; // initialize variable with value provided by user through getValueFromUser()
	
	printDouble(num); // call the printDouble() and pass by value num as argument

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file