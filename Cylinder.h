//
// Created by C3ll256 on 7/12/2020.
//

#ifndef CPP_CLASS_Cylinder_H
#define CPP_CLASS_Cylinder_H

#define PI 3.14159

#include <iostream>

class Cylinder {
private:
  double _r;
  double _height;
public:
  double cylinder_side_area();
  double cylinder_volume();
  double circle_perimeter();
  double circle_area();
  Cylinder(double r, double height);
};


#endif //CPP_CLASS_Cylinder_H
