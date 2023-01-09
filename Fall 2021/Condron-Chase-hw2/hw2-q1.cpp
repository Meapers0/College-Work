/*
Author: Chase Condron
Program: HW2, Q1
Date created: 9/21/21

Problem: Write a program that reads in five integers from the user, and computes the 
largest and the smallest numbers.
*/

#include <iostream>

int main()
{
    int min, max, a, b, c, d, e;
    std::cout << "Enter 5 numbers to calculate the highest and lowest value\n";
    std::cin >> a >> b >> c >> d >> e;
    min = a;
    max = a;

    if (max > a)
    {
        max = a;
    }
    if (min < a)
    {
        min = a;
    }
    if (max > b)
    {
        max = b;
    }
    if (min < b)
    {
        min = b;
    }
    if (max > c)
    {
        max = c;
    }
    if (min < c)
    {
        min = c;
    }
    if (max > d)
    {
        max = d;
    }
    if (min < d)
    {
        min = d;
    }
    if (max > e)
    {
        max = e;
    }
    if (min < e)
    {
        min = e;
    }
    std::cout << "Your min value is: " << min << std::endl;
    std::cout << "Your max value is: " << max << std::endl;
    system("Pause");
    return 0;
}