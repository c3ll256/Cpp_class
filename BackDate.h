//
// Created by C3ll256 on 7/12/2020.
//

#ifndef CPP_CLASS_BACKDATE_H
#define CPP_CLASS_BACKDATE_H
#include <iostream>
#include <algorithm>
#include <cmath>

typedef struct {
  int year;
  int month;
  int day;
} Date;

class BackDate {
private:
  Date _go_date;
  int _go_days;
  int _days_of_month(int year, int month);
  int _input_verify();
public:
  Date count_date();
  BackDate(Date go_date, int go_days);
};


#endif //CPP_CLASS_BACKDATE_H
