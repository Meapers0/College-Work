/*
Author			: Chase Condron
Program			: hw1, Q2
Date Created	: 9/9/21
Usage			:

2) Write a program that reads in two numbers (type is double) from the user, and displays their sum, product and average.

The two numbers that are read must be stored as double. It is up to you whether you want to store the sum, product and average as variables, and what their types should be.

Remember, the average of two numbers, x and y is given by (x + y)/2

*/

/*
Psuedo Code:
1.) Get two inputs from user.
2.) Store the two inputs and calculate their average
3.) Display the average of the inputs.
*/

#include <iostream>

using namespace std;

int main()
{
	//declare variables
	double val1, val2, avg, sum, product;

	//get user input
	cout << "Please enter two values you wish to get the average of." << endl;
	cin >> val1 >> val2;

	sum = (val1 + val2);
	product = (val1 * val2);
	avg = (val1 + val2) / 2;
	cout << "Average of the two numbers: " << avg\n << "Sum of the two numbers: " << sum\n << "Product of the two numbers: " << product;

	return 0;
}