#include <iostream>

int main() {
  int x = 10, y = 0;
  double z;

  try {
    if(y==0) {throw z;} //if y is ever 0, will throw double z
    else {z = x/y;}
    if(x < y) {throw x;} //if x is ever less than y, will throw int x;
  } catch(int i) {
    std::cout << "error: int" << "\n";
  } catch(double d) {
    std::cout << "error: double" << "\n";
  }
}