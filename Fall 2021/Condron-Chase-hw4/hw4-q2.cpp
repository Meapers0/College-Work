/*
Author: Chase Condron
Program: HW4, Q2
Date created: 10/21/21
---------------------------------------------------------------------------------------
2) We will do the palindrome problem, but we will check any number and see if
it is a palindrome. Further, we will use functions.

Write one function that will take a number as input and return a number where
the digits are reversed. I am giving you the algorithm for this function below.

the following function takes a number num as parameter and returns the number
that is a number where the digits are reverse that of num.
---------------------------------------------------------------------------------------
PSEUDO CODE - Overall program
1.) Get value from the user
2.) Using a function, determine the flipped number of the entry
3.) If or if not a palindrome, display results.
*/
#include <iostream>

int reverseInt(int num);
/*
INPUTS: 1 Variable; num
OUTPUTS: reverseNum

PSEUDO CODE - reverseInt
1.) Take users entry, assign to x as to not overwrite num
2.) calculate reversed entry and retrun that number with the function call.
*/
int reverseInt(int num){
    int x = num;
    int reverseNum = 0;
    while (x > 0) {
        reverseNum = reverseNum * 10 + x % 10;
        x = x / 10;
    }
    return reverseNum;
}
/*
PSEUDO CODE - Main
1.) Declare num, reverseNum
2.) Ask for user input, store in num. Call the function to determine the reversed value of num and display it.
3.) Call this function again, and store that value in a seperate variable other than num.
4.) Determine if the value is a palindrome.
*/
int main(){
    int num, reverseNum;
    std::cout << "Please enter a number to check if it is a palindrome.\n";
    std::cin >> num;
    std::cout << "Reversed number is: " << reverseInt(num) << "\n";
    reverseNum = reverseInt(num);

    if (reverseNum != num){
        std::cout << "Sorry, your number is not a palindrome... =( \n";
    } 
    else if (reverseNum == num) {
        std::cout << "Your number is a palindrome! =) \n";
    }
    return 0;
}