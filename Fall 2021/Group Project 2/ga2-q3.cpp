/*
Author: Chase Condron, Karsyn Hutchinson, Ivory Scherphorn
Program: ga2-q2
Date Created: 11/9/21

PesudeoCode:
1.) Create an array to hold the amount of terms for calc pi
2.) Calculate pi using a nested loop
3.) Display results to the user.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
//initialize variables/arr
int terms[10]= {1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000};
double val [10];
double sum;
double n = 4.0;
double d = 1.0;
cout << "# terms \t" << " Values of pi" << endl;
//start nested loop to go through the terms
for (int i = 0; i <= 9 ; i++){
    sum =0;
    n = 4.0;
    d = 1.0;
    //loop that calulates pi based on terms
    for (int j = 0; j < terms[i]; j++)    {
        sum += (n/d);
        n = -n;
        d = d + 2;
    }
    //store pi here
    val[i] = sum;
}
//loop to display to user
for (int i = 0; i <= 9; i++){
    cout << setw(7) <<terms[i] << "\t\t ";
    cout << setprecision(11) << val[i] << endl;
}
return 0;
}

