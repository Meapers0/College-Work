/*
Author: Chase Condron
Program: HW2, Q2
Date created: 9/21/21

Problem: Write a program that reads in a date of birth as 3 integers (month, date, year),
and determines whether the person is of legal driving age (age 16) on Oct 05, 2021.

Hint: note that a person born on or before Oct 05, 2005 are of legal driving age.
*/
#include <iostream>

int main()
{
    int year, month, day, age;
    std::cout << "Please enter your date of birth as \nMonth \nDay \nYear \n";
    std::cin >> month >> day >> year;

    if (year >= 2005)
    {
        if (month <= 10)
        {
            if(day < 5)
            {
                std::cout<<"You cannot drive!";
            }
            std::cout<<"You cannot drive!";
        }
        if (month >= 10)
        {
            if (day > 5)
            {
                std::cout<<"You can drive!";
            }
            std::cout<<"You can drive!";
        }
    }
    if (year <= 2005)
    {
        std::cout << "You can drive!";
    }
    system ("Pause");
    return 0;
}