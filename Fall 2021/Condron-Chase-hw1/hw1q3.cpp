/*
Author			: Chase Condron
Program			: hw1, Q1
Date Created	: 9/9/21
Usage			:

Problem: Write a program that reads the value(x) from the user(type is integer), and calculates y based on the following formula :

y = 4x ^ 2 + 5x + 10

The value x that is read must be stored as an integer.

Remember, x ^ 2 = x * x
*/

/*
Pseudocode:
1.) Get value of (x) from the user.
2.) Calculate (y) based on provided formula.
3.) Display results to the user.
*/

#include <iostream>

using namespace std;

int main()
{
	int xIn;
	int yOut;

	cout << "Please enter value of (x) to plug in for the formula -> y = 4x ^ 2 + 5x + 10" << endl;
	cin >> xIn;
	yOut = 4 * ((xIn) * (xIn)) + 5 * (xIn)+10;
	cout << "y = " << yOut;

	return 0;
}