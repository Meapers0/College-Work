#ifndef POLYGON
#define POLYGON
#include <iostream>

//creating polygon
class Polygon {
protected:
  int width, height;
public:
  void set_width_height(int w, int h) {
    width = w;
    height = h;
  }
  virtual int get_area() = 0;
  virtual void draw() = 0;
};

class Rectangle : public Polygon {
public:
  int get_area() {
    return width * height;
  }
  void draw() {
  for(int i = 0; i < height; i++) {
    for(int j = 0; j < width; j++) {
      std::cout << "*";
      }
    std::cout << "\n";
    }
  }
};

class Triangle : public Polygon {
public:
  int get_area() {
    return (1/2) * width * height;
  }
  void draw() {
    int j = 1;
    for(int i = 0; i < height; i++) {
      int k = 1;
      while (k <= j) {
        std::cout << "*";
        k++;
      }
      std::cout << "\n";
    }
    j += 2;
  }
};

#endif // POLYGON_H
