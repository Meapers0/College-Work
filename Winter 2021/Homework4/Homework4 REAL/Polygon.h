#ifndef POLYGON_H
#define POLYGON_H

class Polygon {
public:
  Polygon();
  Polygon(int new_width, int new_height);
  void set_width(int new_width);
  void set_height(int new_height);
  //virtual int get_area(); <- produces error
  virtual int get_area() = 0;
protected:
  int width = 0;
  int height = 0;
};

class Rectangle : public Polygon {
public:
  Rectangle();
  Rectangle(int new_width, int new_height);
  int get_area() {
    return width * height;
  }
};

class Triangle : public Polygon {
public:
  Triangle();
  Triangle(int new_width, int new_height);
  int get_area() {
    return (width * height)/2;
  }
};
#endif //POLYGON_H