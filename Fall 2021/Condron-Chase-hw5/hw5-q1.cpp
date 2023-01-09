/*
--------------------------------------
Author: Chase Condron
Program: HW5, Q1
Date created: 11/9/21
--------------------------------------
*/
#include <iostream>
/*
INPUTS: 2 Variables by reference; x & y
OUTPUTS: None

PSEUDO CODE - swap Function
1.) Takes inputs from user by reference, use a temp variable to hold the value of x for comparing.
2.) Use if else statements to compare the larger or small value
*/
void swap(int & x, int & y){
    int temp = x;
    x = y;
    temp > y ? y = temp : x = temp;
}
/*
PSEUDO CODE - Main
1.) Declare num1, num2
2.) Ask user for their two numbers, call the swap function.
3.) Display results to the user
*/
int main(){
    int num1, num2;
	std::cout << "Enter 2 numbers: \n";
	std::cin >> num1 >> num2;
	swap(num1, num2);
	std::cout << "The smaller number is: " << num1 << std::endl;
	std::cout << "The larger number is: " << num2 << std::endl;	
	return 0;
}