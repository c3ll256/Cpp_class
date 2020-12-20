//
// Created by C3ll256 on 15/12/2020.
//

#define PI 3.14159

#include "Circle.h"

// 圆周长
double Circle::get_perimeter() {
  return 2 * _border[0] * PI;
}

// 圆面积
double Circle::get_area() {
  return _border[0] * _border[0] * PI;
}
