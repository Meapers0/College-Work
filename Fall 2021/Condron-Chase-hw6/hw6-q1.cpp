/*
--------------------------------------
Author: Chase Condron
Program: HW6, Q1
Date created: 11/24/21
--------------------------------------
*/
#include <iostream>

void arrange (int & n1, int & n2, int & n3);
void arrange (int * p1, int * p2, int * p3);
void swap(int &a, int &b);

void arrange (int & n1, int & n2, int & n3){
    if (n1 > n2){
        swap(n1, n2);
    }
    if (n1 > n3){
        swap(n1, n3);
    }
    if (n2 > n3){
        swap(n2, n3);
    }
}
void arrange (int * p1, int * p2, int * p3){
    if (*p1 > *p2){
        swap(*p1, *p2);
    }
    if (*p1 > *p3){
        swap(*p1, *p3);
    }
    if (*p2 > *p3){
        swap(*p2, *p3);
    }
}
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int x, y, z;
    int *p1, *p2, *p3;
    p1 = &x;
    p2 = &y;
    p3 = &z;
    std::cout << "Enter 3 numbers to compare...\n";
    std::cin >> x >> y >> z;
    arrange(x, y, z);
    std::cout << "The 3 numbers after the call to the first function: " << x << " " << y << " " << z << std::endl;
    arrange(p1, p2, p3);
    std::cout << "The 3 numbers after the call to the second function: " << *p1 << " " << *p2 << " " << *p3;
}