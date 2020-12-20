#ifndef CPP_CLASS_TRIANGLE_H
#define CPP_CLASS_TRIANGLE_H

/*
 * 問題紀錄：
 * 按照標準寫好就好，但設計錯誤的時候思考了一下，最後決定還是按照標準拋出一個錯誤，讓外部去 catch 。
 * */

#include "PlaneGeometry.h"

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

class Triangle : protected PlaneGeometry {
private:
  bool _is_triangle();

public:
  double get_area() override;

  double get_perimeter() override;

  int triangle_type_border();

  int triangle_type_angle();

  Triangle(std::vector<double> border);
};


#endif //CPP_CLASS_TRIANGLE_H
