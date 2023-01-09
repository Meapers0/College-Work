/*
Author: Chase Condron, Karsyn Hutchinson, Ivory Scherphorn
Program: ga1-q3
Date Created: 9/24/21

Problem: Ask the user to enter a 3 digit number, and check whether it is a palindrome. 
A palindrome is a string that reads the same forward and backward. Examples include:

Hint: You may use the following algorithm sketch. From the 3 digit number, extract the first, second and third digits using division by 10 and modulo 10 operations. 
Once you have gotten the three digits, come up with the reversed number by multiplying each digit by appropriate powers of 10 and adding them. 
Now, check whether the original number is equal to the reversed number.

Pseudocode:
1.) Get input from the user of their 3 digit number. (Use a loop to catch user error.)
2.) Calculate the digits of users number to get the reversed.
3.) Use an if else to determine their number
4.) Display results
*/

#include <iostream>

using namespace std;

int main () {

//declaring variables
int num, remainder, sum  =0, quotient;

//collect users number they wish to check
cout << "Please input number to check if palindrome" << endl;
cin >> num;
//loop to catch user error.
while (num > 999 || num < 100){
    cout << "Please try again. Enter a number that has 3 digits.\n";
    cin >> num;
}
//start the loop to build the reverse of the number a user entered
quotient = num;
while (quotient!= 0)
{
    remainder = quotient%10;
    quotient = quotient/10;
    sum = (sum * 10) + remainder;
}
//display results
if (sum == num)
    cout << sum << " is a palindrome" << endl;
else
    cout << num << " is not a palindrome" << endl;
return 0;
}
