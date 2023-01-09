/*
Author: Chase Condron, Karsyn Hutchinson, Ivory Scherphorn
Program: ga1-q2
Date Created: 9/23/21

Problem: Write a C++ program that prints the largest and the second largest number of x integers entered by the user, where x should also be input by the user (Note this program works only if x >= 2). 

Pseudocode:
1.) Get input from the user on how many numbers they want to enter !<2.
2.) using a loop, get inputs from the user and determine which inputs are largest and second largest.
3.) Display outputs.
*/

#include <iostream>

int main(){
    //declare variables
    int currLargest, currSecLargest, x, y, counter;
    //ask the user for amount of numbers to enter for the loop counter
    std::cout << "How many numbers do you wish to enter?\n";
    std::cin >> counter;
    while (counter <= 2){
        //message to catch user not entering more than 1 numbers
        std::cout << "Please enter a number greater than 1.\n";
        std::cin >> counter;
    }
    //user enters their numbers
    std::cout << "Please enter your numbers.\n";
    std::cin >> x;
    std::cin >> y;
    //start comparing values, the if else determines which of the first two entries are greater
    if (x < y){
        currSecLargest = x;
        currLargest = y;
    }
    else{
        currLargest = x;
        currSecLargest = y;
    }
    //now that we know the currLargest and currSecLargest, we start comparing these to new entries
    while (counter > 2 ){
        std::cin >> x;
        if (currLargest < x){
            currSecLargest = currLargest;
            currLargest = x;
        }
        else if (currSecLargest < x){
            currSecLargest = x;
        }
        counter--;
    }
    //display values
    std::cout << "Your largest number is: " << currLargest << std::endl;
    std::cout << "Your second largest number is: " << currSecLargest << std::endl;
    return 0;
}