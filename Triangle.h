#ifndef CPP_CLASS_TRIANGLE_H
#define CPP_CLASS_TRIANGLE_H

/*
 * 問題紀錄：
 * 按照標準寫好就好，但設計錯誤的時候思考了一下，最後決定還是按照標準拋出一個錯誤，讓外部去 catch 。
 * */

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

class Triangle {
private:
  double _border[3];
  bool _is_triangle();
public:
  double triangle_area();
  double triangle_perimeter();
  int triangle_type_border();
  int triangle_type_angle();
  Triangle(double x, double y, double z);
};


#endif //CPP_CLASS_TRIANGLE_H
