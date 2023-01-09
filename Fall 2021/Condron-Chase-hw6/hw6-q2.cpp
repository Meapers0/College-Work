/*
--------------------------------------
Author: Chase Condron
Program: HW6, Q2
Date created: 11/24/21
--------------------------------------
*/
#include <iostream>

int searchCharacter(char * arr, char key);

int searchCharacter(char * arr, char key){
    for (int i = 0; i < 11; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main() {
    char strArr[10];
    char c; // character to search
    int pos; // position where we found the character

    std::cout << "Enter a string of < 10 characters : ";
    std::cin >> strArr;
    
    while (true) {
          std::cout << "Enter a character (0 to quit) : ";
          std::cin >> c;
          if (c == '0') break;
          pos = searchCharacter(strArr, c);
          if (pos == -1) std::cout << "character " << c << " is not present in the string " << strArr << std::endl;
          else std::cout << "character " << c << " found at position " << pos << " in the string " << strArr << std::endl;
    }
    return 0;
}