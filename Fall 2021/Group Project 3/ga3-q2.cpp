/*
--------------------------------------
Author: Chase Condron, Ivory Scherphorn, Karsyn Hutchinson
Program: ga3, q1
Date created: 12/4/21
--------------------------------------
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	//variables declared
	int num, guess, tries = 0;
	
	//seeding rng number
	srand(time(0));
	num = rand() % 100 + 1;
	cout << "Let's play Guess the Number!" << endl;

	//do loop to prompt the user to enter their guess, will end if they guess correctly...
	do
	{
		//user enters their guess
		cout << "Please enter a number between 1-100: ";
		cin >> guess;
		tries++;

			//logic to decide if their guess is too high or too low
			if (guess > num)
				cout << "Too high! Please pick a lower number!" << endl;
			else if (guess < num)
				cout << "Too low! Please pick a higher number!" << endl;
			//display this once they have guess correctly
			else
			{
				cout << "Correct! It took " << tries << " tries to guess the correct number!\n";
				cout << "Thanks for playing!" << endl;
			}
	} while (guess != num);
	return 0;
}