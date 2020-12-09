//
// Created by C3ll256 on 7/12/2020.
//

#include "BackDate.h"

using namespace std;

// 输出一个月有多少天
int BackDate::_days_of_month(int year, int month) {
  if (month < 1 || month > 12)
    return -1;
  year = abs(year);
  if (month == 2) {
    if (year%4 == 0)
      return 29;
    else return 28;
  } else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
    return 31;
  } else if (month == 4 || month == 6 || month == 9 || month == 11) {
    return 30;
  }
  return -1;
}

// 计算归来日期
Date BackDate::count_date() {
  int go_days = _go_days;
  int b_y = _go_date.year, b_m = _go_date.month, b_d = _go_date.day;
  if (b_d + go_days < _days_of_month(b_y, b_m))
    return {b_y, b_m, b_d + go_days};
  go_days -= (_days_of_month(b_y, b_m) - b_d);
  b_m++;
  while(true) {
    if (b_m > 12) {
      b_m = 1;
      b_y++;
    }
    int this_month_days = _days_of_month(b_y, b_m);
    cout << b_m << endl;
    cout << this_month_days << endl;
    if (go_days < this_month_days) {
      b_d = go_days;
      break;
    }
  }
  return {b_y, b_m, b_d};
}

// 输入验证
int BackDate::_input_verify() {
    if (_go_date.day > _days_of_month(_go_date.year, _go_date.day) || _go_date.year <= 0 || _go_date.day <= 0 || _go_date.month <= 0)
      return -1;
  return 1;
}

BackDate::BackDate(Date go_date, int go_days) {
  _go_date = go_date; _go_days = go_days;
  if(!_input_verify())
    throw invalid_argument("Illegal date.");
}
