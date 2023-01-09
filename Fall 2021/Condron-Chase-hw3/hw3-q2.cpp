/*
Author: Chase Condron
Program: HW3, Q2
Date created: 10/05/21

2) Do the same problem as 1), but now use a for loop instead of a while loop to 
compute the sum of even numbers from n1 to n2. (The test data is the same as above)

Pseudo Code:
1.) Get numbers from user, prevent them from doing x >= y
2.) Calculate the sum of even numbers using a loop (a for loop this time) and %
3.) Display results to the user.
*/
#include <iostream>

int main(){
    //declare variables
    int x, y, sum;

    //get info from user
    std::cout << "Please enter two numbers to get the sum of their even numbers between them.\n";
    std::cin >> x;
    std::cin >> y;
    //while loop to catch user error
    while (x >= y){
        std::cout << "Please enter your numbers such that your first entry is less than your second.\nFor example (6, 12)\n";
        std::cin >> x;
        std::cin >> y;
    }
    //loop to calculate the sum of even numbers
    for(int i = x; i <= y; i++){
        if(i % 2 == 0){
            sum +=i;
        }
    }  
    //display results to user
    std::cout << "The sum of even numbers between " << x << " and " << y << " is: " << sum;
}   