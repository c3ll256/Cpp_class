//
// Created by C3ll256 on 9/12/2020.
//

#ifndef CPP_CLASS_GEOMETRY_H
#define CPP_CLASS_GEOMETRY_H

class Geometry {
protected:
  int _border_count;
public:
  int get_border_count() const { return _border_count; };

  Geometry(int border_count) : _border_count(border_count) {};
};

#endif //CPP_CLASS_GEOMETRY_H
