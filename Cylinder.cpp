//
// Created by C3ll256 on 7/12/2020.
//

#include "Cylinder.h"
using namespace std;

// 圆周长
double Cylinder::circle_perimeter() {
  return 2 * _r * PI;
}

// 圆面积
double Cylinder::circle_area() {
  return _r * _r * PI;
}

// 圆柱体侧面积
double Cylinder::cylinder_side_area() {
  return circle_perimeter() * _height;
}

// 圆柱体体积
double Cylinder::cylinder_volume() {
  return circle_area() * _height;
}

Cylinder::Cylinder(double r, double height) {
  _r = r; _height = height;
}