/*
Author: Chase Condron
Program: HW3, Q1
Date created: 10/05/21

1) Write a program that accepts two integers from the user, say n1 and n2. Compute 
the sum of all even numbers between n1 and n2 (both inclusive) using a while loop.

Note that you can assume that n2 >= n1 (in other words, your program needs to work
only for such numbers).

Pseudo Code:
1.) Get numbers from user, prevent them from doing n1 >= n2
2.) Calculate the sum of even numbers using a loop and %
3.) Display results to the user.
*/

#include <iostream>

int main(){
    //declare variables
    int n1, n2, sum;

    //get info from user
    std::cout << "Please enter two numbers to get the sum of their even numbers between them.\n";
    std::cin >> n1;
    std::cin >> n2;
    //while loop to catch user error
    while (n1 >= n2){
        std::cout << "Please enter your numbers such that your first entry is less than your second.\nFor example (6, 12)\n";
        std::cin >> n1;
        std::cin >> n2;
    }
    //loop to calculate the sum of even numbers
    int i = n1;
    while(i <= n2){
        if(i % 2== 0){
            sum += i;
        }
        i++;                
    }
    std::cout<< "The sum of even numbers between " << n1 << " and " << n2 << " is: " << sum;
}