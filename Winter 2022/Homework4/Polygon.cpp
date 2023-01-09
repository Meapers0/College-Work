#include <iostream>
#include "Polygon.h"

int main() {
  Polygon* p;
  Rectangle r;
  p = &r;
  p->set_width_height(6,4);
  std::cout << "Area of rectangle = " << p->get_area() << "\n";
  p->draw();
  return 0;
}