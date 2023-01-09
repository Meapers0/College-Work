/*
Author: Chase Condron
Program: HW2, Q3
Date created: 9/21/21

Problem: Write a program that reads in the type of engine as a character. The type can 
be one of three: 'g' indicating traditional gasoline engine, 'h' denoting hybrid, 
and 'e' denoting electric. You will then output the mileage of the car as follows.
If the user enters any other type of engine, print a message saying that you do 
not recognize that type of engine. 

Use switch-case to determine the mileage in your program:

gasoline engine: 25 miles per gallon
hybrid engine: 45 miles per gallon
electric engine: 90 miles per gallon
*/

#include <iostream>

int main()
{
    char engine;
    int milage;

    std::cout << "Enter your engine denoted by:\n\"g\" Gasoline Engine.\n\"h\" Hybrid Engine.\n\"e\" Electric Engine.\n";
    std::cin >> engine;
    
    switch (engine)
    {
        case 103:
            std::cout << "Gasoline Engine.\n";
            milage = 25;
            std::cout << "Your milage is : " << milage << "MPG";
        break;
        case 104:
            std::cout << "Hybrid Engine.\n";
            milage = 45;
            std::cout << "Your milage is : " << milage << "MPG";
        break;
        case 101:
            std::cout << "Electric Engine.\n";
            milage = 90;
            std::cout << "Your milage is : " << milage << "MPG";
        break;
        default:
            std::cout << "Unkown Engine.\nPlease check your capitilization or reread the prompt.";
    }
    system("Pause");
    return 0;
}