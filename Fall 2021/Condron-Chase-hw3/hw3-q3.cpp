/*
Author: Chase Condron
Program: HW3, Q3
Date created: 10/05/21

3) Write a program that gets a valid month from the user as an integer. Remember 
that a valid month must be between 1 and 12. If the user enters an invalid month, 
prompt the user to try again. After the user enters a valid month, print out the 
user entered month as a string.

Pseudo Code:
1.) Get month from the user, prevent them from entering x >= 13 and x <= 0
2.) Using a switch case, print out the appropriate month.
*/

#include <iostream>

int main(){
    //declare
    int month;

    //get month from user
    std::cout << "Please enter a month numerically.\n";
    std::cin >> month;

    //prevents user from entering false info
    while (!(month <= 12 && month >= 1)){
        std::cout << "Please enter a month between 1-12.\n";
        std::cin >> month;
    }
    
    //switch case to get the month and display results
    switch (month)
    {
    case 1:
        std::cout << "January";
        break;
    case 2:
        std::cout << "February";
        break;
    case 3:
        std::cout << "March";
        break;
    case 4:
        std::cout << "April";
        break;
    case 5:
        std::cout << "May";
        break;
    case 6:
        std::cout << "July";
        break;
    case 7:
        std::cout << "June";
        break;
    case 8:
        std::cout << "August";
        break;
    case 9:
        std::cout << "September";
        break;
    case 10:
        std::cout << "October";
        break;
    case 11:
        std::cout << "November";
        break;
    case 12:
        std::cout << "December";
        break;
    }
}