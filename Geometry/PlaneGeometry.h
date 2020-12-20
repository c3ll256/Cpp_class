//
// Created by C3ll256 on 9/12/2020.
//

#ifndef CPP_CLASS_PLANEGEOMETRY_H
#define CPP_CLASS_PLANEGEOMETRY_H

#include "Geometry.h"

#include "vector"

using namespace std;

class PlaneGeometry : protected Geometry {
protected:
  virtual double get_area() { return 0; };

  virtual double get_perimeter() { return 0; };
  vector<double> _border;
public:
  PlaneGeometry(int border_count, vector<double> border) : Geometry(border_count), _border(border) {};
};


#endif //CPP_CLASS_PLANEGEOMETRY_H
