//
// Created by C3ll256 on 15/12/2020.
//

#ifndef CPP_CLASS_DATETIME_H
#define CPP_CLASS_DATETIME_H

#include "Date/DateHeader.h"
#include "Time/TimeHeader.h"

#include <cmath>

using namespace std;

class DateTime {
private:
  static void _add(int mod, int &value, int &next, int add_value);

  static void _reduce(int mod, int &value, int &next, int reduce_value);

public:
  Year year;
  Month month;
  Day day;
  Hour hour;
  Minute minute;
  Second second;
  MilliSecond milli_second;

  DateTime &operator=(const DateTime &date_time);

  DateTime operator+(const DateTime &date_time);

  DateTime operator-(const DateTime &date_time);

  DateTime(int year, int month, int day, int hour, int minute, int second, int millisecond) :
          year(Year(year)), month(Month(year, month)), day(Day(day)), hour(Hour(hour)), minute(Minute(minute)),
          second(Second(second)), milli_second(MilliSecond(millisecond)) {};

  static int get_month_day(int year, int month);
};

#endif //CPP_CLASS_DATETIME_H
