//
// Created by C3ll256 on 7/12/2020.
//

#ifndef CPP_CLASS_Cylinder_H
#define CPP_CLASS_Cylinder_H
#define PI 3.14159

#include "Circle.h"

#include <iostream>

class Cylinder {
private:
  double _height;
  Circle _circle;
public:
  double get_bottom_area();

  double get_bottom_perimeter();

  double cylinder_side_area();

  double cylinder_volume();

  Cylinder(double r, double height);
};


#endif //CPP_CLASS_Cylinder_H
