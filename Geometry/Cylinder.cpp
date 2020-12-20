//
// Created by C3ll256 on 7/12/2020.
//

#include "Cylinder.h"

using namespace std;

// 圆柱体侧面积
double Cylinder::cylinder_side_area() {
  return _circle.get_perimeter() * _height;
}

// 圆柱体体积
double Cylinder::cylinder_volume() {
  return _circle.get_area() * _height;
}

double Cylinder::get_bottom_area() {
  return _circle.get_area();
}

double Cylinder::get_bottom_perimeter() {
  return _circle.get_perimeter();
}


Cylinder::Cylinder(double r, double height) : _circle(Circle(1, {r})) {
  _height = height;
}

