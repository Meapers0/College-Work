#include "Polygon.h"
#include <iostream>

Polygon::Polygon() {}
Polygon::Polygon(int new_width, int new_height) {
  width = new_width;
  height = new_height;
}
void Polygon::set_width(int new_width) {
  width = new_width;
}
void Polygon::set_height(int new_height) {
  height = new_height;
}
Rectangle::Rectangle() {}
Rectangle::Rectangle(int new_width, int new_height) {
  width = new_width;
  height = new_height;
}
Triangle::Triangle() {}
Triangle::Triangle(int new_width, int new_height) {
  width = new_width;
  height = new_height;
}

int main() {
  Polygon* p;
  //Question 1
  //with virtual int get_area() = 0;
  //Polygon x; //this is illegal
  //This does not work because polygon is an abstract class, so we can only point to it.

  //Question 2
  //with virtual int get_area();
  //Polygon x; //this is illegal
  //This will create an undefined reference to Polygon/vtable. 
  //Any non pure virtual functions must be defined.
  Rectangle r;
  Triangle t;
  p = &r;
  p->set_height(4); p->set_width(6);
  std::cout << "Area of rectangle = " << p->get_area() << "\n";
  p = &t;
  p->set_height(3); p->set_width(9);
  std::cout << "Area of triangle = " << p->get_area() << "\n";
}