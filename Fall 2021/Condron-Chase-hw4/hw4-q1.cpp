/*
Author: Chase Condron
Program: HW4, Q1
Date created: 10/21/21
---------------------------------------------------------------------------------------
1) Consider the first problem in HW 3, which is to compute the sum of all 
even numbers between n1 and n2, where n1 and n2 are entered by the user. There
we assumed that n2 is >= n1.

We will extend HW3. We will write three functions as follows:
(a) write a function that checks whether the input is valid. Remember the input
(that consists of two numbers n1 and n2) is valid if n2 >= n1.
(b) write a function called loopAdd, where you write a loop to compute the sum
of all even numbers between n1 and n2 (both inclusive) -- you can use any of
the loop constructs -- for-loop, while-loop (or) do-while-loop.
(c) write a function called formulaAdd, where you compute the sum of all even
numbers between n1 and n2 (both inclusive) as:
if (n1 is even) { n = (n2 - n1 + 2)/2; sum = (n1 + n - 1) * n; }
if (n1 is odd)  { n = (n2 - n1 + 1)/2; sum = (n1 + n) * n; }

In your main function, we will use the above functions as follows:
- Keep getting user input in a loop, till the user enters valid input, using
function you wrote for (a) to check if input is valid.
- Compute the sum that you get using loopAdd and formulaAdd functions and 
display the two sums.
---------------------------------------------------------------------------------------
PSEUDO CODE - Overall program
1.) Get values from the user using a function to ensure proper entry.
2.) Using two different functions, get sum of even numbers from the entries
3.) Display results.
*/
#include <iostream>

void inputValid(int & x, int & y);

int loopAdd(int numOne, int numTwo);

int formulaAdd(int numOne, int numTwo);
/*
INPUTS: 2 Variables by reference; x & y
OUTPUTS: None

PSEUDO CODE - inputValid Function
1.) Get first entry from the user, and then compare this value to second, if it is greater, ask user to make their second value greater than the first.
2.) Exit the loop.
*/
void inputValid(int & x, int & y){
    std::cout << "Enter your first value. This must be less than your second entry.\n";
    std::cin >> x;
    do{
        std::cout << "Enter your Second value. This must be greater than your first entry.\n";
        std::cin >> y;
    } while (x > y);
}
/*
INPUTS: 2 Varibles, from main; numOne and numTwo
OUTPUTS: 1; sum

PSEUDO CODE - loopAdd Function
1.) Get values from main, declare sum 
2.) Start loop to get sum of even numbers between the two values.
*/
int loopAdd(int numOne, int numTwo){
    int sum = 0;
    for (int i = numOne; i<=numTwo; i++){
        if (i % 2 == 0){
            sum += i;
        }
    }
    return sum;
}
/*
INPUTS: 2 Varibles, from main; numOne and numTwo
OUTPUTS: 1; sum

PSEUDO CODE - formulaAdd Function
1.) Get values from main, declare sum
2.) Do if else statements and figure out the sum of values formulaically.
*/
int formulaAdd(int numOne, int numTwo){
    int num;
    int sum;
    if (numOne % 2 == 0){
        num = (numTwo - numOne + 2)/2;
        sum = (numOne + num - 1) * num;
    }
    else if (numOne % 2 == 1){
        num = (numTwo - numOne + 1)/2;
        sum = (numOne + num) * num;
    }
    return sum;
}
/*
PSEUDO CODE - Main
1.) Declare numOne, numTwo
2.) Call inputValid function to get the proper inputs from the user
3.) Display results to the user using the loopAdd function, and do the same for the formulaAdd function.
*/
int main(){
    int numOne, numTwo;
    inputValid(numOne, numTwo);
    std::cout << "Sum from loop add = " << loopAdd(numOne, numTwo) << "\n";
    std::cout << "Sum from formula add = " << formulaAdd(numOne, numTwo) << "\n";

    return 0;
}