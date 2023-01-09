/*
Author			: Chase Condron
Program			: hw1, Q1
Date Created	: 9/9/21
Usage			:

Problem: Write a program that reads in radius of a circle (type is double), and displays the radius, diameter, circumference and area of the circle.

In your program, you must declare a constant variable PI of type double with value 3.14. The radius must be stored as a double. It is up to you as to whether you want to store the diameter, circumference and area as variables, and what their types should be.

Remember:
Diameter = 2 * radius
Circumference = 2 * PI * radius
Area = PI * radius * radius

*/
/*
Pseudocode:
1.)Get radius from user.
2.) Calculate diameter, circumference, and area.
3.) Display results to the user.
*/
#include <iostream>

using namespace std;

int main() {
	//declare varialbes
	double rInput;
	double diameter;
	double circumference;
	double area;
	double const pi = 3.14;

	cout << "Please enter the radius of your circle.\n";
	cin >> rInput;

	//begins to calcuate
	diameter = 2 * rInput;
	circumference = 2 * pi * rInput;
	area = pi * rInput * rInput;

	//displays values to the user
	cout << "Diameter: " << diameter << endl;
	cout << "Circumference: " << circumference << endl;
	cout << "Area: " << area << endl;

	return 0;
}