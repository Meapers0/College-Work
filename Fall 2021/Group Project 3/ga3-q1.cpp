/*
--------------------------------------
Author: Chase Condron, Ivory Scherphorn, Karsyn Hutchinson
Program: ga3, q1
Date created: 12/4/21
--------------------------------------
*/

#include <iostream>

//insertionSort function
//when called it loops through the array and sets itself = to the key
// j is a step behind i and will sort through to make a new sorted array.
void insertionSort(int arr[]){
    for (int i = 0; i < 8; i++){
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
//function to make displaying results to the screen easier.
void displayArr(int arr[]){
    for (int i = 0; i < 8; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main(){
    //variables declared
    int x; 
    int arr[8] = {};
    //user enters values to sort
    std::cout << "Please enter 8 values to sort...\n";
    for (int i = 0; i < 8; i++){
        std::cin >> x;
        arr[i] = x;
    }
    //display before sort
    std::cout << "Your array before sort is...\n";
    displayArr(arr);
    insertionSort(arr);
    //display after sort
    std::cout << "Your array after sort is...\n";
    displayArr(arr);
}