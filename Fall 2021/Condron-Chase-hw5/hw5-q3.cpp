/*
--------------------------------------
Author: Chase Condron
Program: HW5, Q3
Date created: 11/9/21
--------------------------------------
*/
#include <iostream>

int main(){
    //2D array to make displaying certain elements easier, can also store variables in the second row
    int scoreArr[2][11] = {{0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100}, {}};
    int total = 0;
    //loop to go through displaying what the user should enter, get user entry
    for (int i = 0; i < 11; i++){
        i < 10 ? (std::cout << "Enter number of students who scored in the range: [ " << scoreArr[0][i] << ", " << scoreArr[0][i]+9 << " ]\n"), std::cin >> scoreArr[1][i] :
        (std::cout << "Enter number of students who scored 100: \n", std::cin >> scoreArr[1][10]);
    }
    //start loop to get the total
    for (int i = 0; i < 11; i++){
        total += scoreArr[1][i];
    }    
    //start loop to start subtracting itself from the previous value in the array and display results.
    for (int i = 0; i < 11; i++){
        i < 1 ? (std::cout << ">= " << scoreArr[0][0] << ": " << total << std::endl) : (total -= scoreArr[1][i-1], std::cout << ">= " << scoreArr[0][i] << ": " << total << std::endl);
    }
}