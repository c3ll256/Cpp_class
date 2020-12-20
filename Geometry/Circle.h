//
// Created by C3ll256 on 15/12/2020.
//

#ifndef CPP_CLASS_CIRCLE_H
#define CPP_CLASS_CIRCLE_H

#include "PlaneGeometry.h"

class Circle : protected PlaneGeometry {
public:
  double get_area() override;

  double get_perimeter() override;

  Circle(int border_count, std::vector<double> border) : PlaneGeometry(border_count, border) {};
};


#endif //CPP_CLASS_CIRCLE_H
