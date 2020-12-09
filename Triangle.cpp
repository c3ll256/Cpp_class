//
// Created by C3ll256 on 7/12/2020.
//
#include "Triangle.h"

using namespace std;

// 判断三角形类型
bool Triangle::_is_triangle() {
  return (Triangle::_border[0] + Triangle::_border[1] > Triangle::_border[2] && Triangle::_border[1] + Triangle::_border[2] > Triangle::_border[0] && \
  Triangle::_border[0] + Triangle::_border[2] > Triangle::_border[1] && abs(Triangle::_border[0] - Triangle::_border[1]) < Triangle::_border[2] && \
  abs(Triangle::_border[1] - Triangle::_border[2]) < Triangle::_border[0] && abs(Triangle::_border[0] - Triangle::_border[2]) < Triangle::_border[1] );
}

// 三角形面积
double Triangle::triangle_area() {
  double s = (Triangle::_border[0] + Triangle::_border[1] + Triangle::_border[2])/2;
  return sqrt(s*(s-Triangle::_border[0])*(s-Triangle::_border[1])*(s-Triangle::_border[2]));
}

// 三角形周长
double Triangle::triangle_perimeter() {
  return Triangle::_border[0] + Triangle::_border[1] + Triangle::_border[2];
}

int Triangle::triangle_type_border() {
  // 等腰三角形或全等三角形
  if (Triangle::_border[0] == Triangle::_border[1] && Triangle::_border[1] == Triangle::_border[2] && Triangle::_border[0] == Triangle::_border[2])
    return 1;
  else if (Triangle::_border[0] == Triangle::_border[1] || Triangle::_border[0] == Triangle::_border[2] || Triangle::_border[1] == Triangle::_border[2])
    return 2;
  else return -1;
}

int Triangle::triangle_type_angle() {
  double border_temp[] = {Triangle::_border[0],Triangle::_border[1],Triangle::_border[2]};
  sort(border_temp,border_temp+2);
  // 角类型
  if (pow(border_temp[2],2) == pow(border_temp[0],2)+pow(border_temp[1],2))
    return 1;
  else if (pow(border_temp[2],2) > pow(border_temp[0],2)+pow(border_temp[1],2))
    return 2;
  else if (pow(border_temp[2],2) < pow(border_temp[0],2)+pow(border_temp[1],2))
    return 3;
  else return -1;
}

Triangle::Triangle(double x, double y, double z) {
  _border[0] = x;
  _border[1] = y;
  _border[2] = z;
  if (!_is_triangle())
    throw invalid_argument("Not triangle");
}