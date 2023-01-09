/*
--------------------------------------
Author: Chase Condron
Program: HW5, Q2
Date created: 11/9/21
--------------------------------------
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
/*
INPUTS: 2 Variables by reference; x & y
OUTPUTS: None

PSEUDO CODE - swap Function
1.) Takes inputs from the user and the arr that was generated randomly... 
2.) Use if/else statements to compare the larger or small value from the array...
3.) Set values accordingly to which is larger/smaller
*/
void swap(int arr[], int x, int y){
    int temp = arr[x];
    arr[x] = arr[y];
    arr[x] > arr[y] ? arr[x] = temp : arr[y] = temp;
}
/*
PSEUDO CODE - Main
1.) Declare arr, index1, index2
2.) Ask user for their two numbers, call the swap function.
3.) Display results to the user
*/
int main() {
	int arr[10];
	int index1, index2;
	srand(time(0));
	for (int i = 0; i < 10; i++) arr[i] = rand() % 1000 + 1;
	std::cout << "Enter 2 indexes between 0 and 9: ";
	std::cin >> index1 >> index2;
	std::cout << "The numbers before swap are: " << arr[index1] << ", " << arr[index2] << std::endl;
	swap(arr, index1, index2);
	std::cout << "The numbers after swap are: " << arr[index1] << ", " << arr[index2] << std::endl;
	return 0;
}