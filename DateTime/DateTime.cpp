//
// Created by C3ll256 on 15/12/2020.
//

#include "DateTime.h"

int DateTime::get_month_day(int year, int month) {
  if (month < 1 || month > 12)
    return -1;
  year = abs(year);
  if (month == 2) {
    if (year % 4 == 0)
      return 29;
    else return 28;
  } else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
    return 31;
  } else if (month == 4 || month == 6 || month == 9 || month == 11) {
    return 30;
  }
  return -1;
}

DateTime &DateTime::operator=(const DateTime &date_time) {
  if (this != &date_time) {
    year = date_time.year;
    month = date_time.month;
    day = date_time.day;
    hour = date_time.hour;
    minute = date_time.minute;
    second = date_time.second;
    milli_second = date_time.milli_second;
  }
  return *this;
}

void DateTime::_add(int mod, int &value, int &next, int add_value) {
  value += add_value;
  if (value >= mod) {
    next += (value / mod);
    value %= mod;
  }
}

void DateTime::_reduce(int mod, int &value, int &next, int reduce_value) {
  value -= reduce_value;
  if (value < 0) {
    next += (value / mod) - 1;
    value = mod + (value % mod);
  }
}

DateTime DateTime::operator+(const DateTime &date_time) {
  int t_year = year.get_value(),
          t_month = month.get_value(),
          t_day = day.get_value(),
          t_hour = hour.get_value(),
          t_minute = minute.get_value(),
          t_second = second.get_value(),
          t_milli_second = milli_second.get_value();

  _add(1000, t_milli_second, t_second, date_time.milli_second.get_value());
  _add(60, t_second, t_minute, date_time.second.get_value());
  _add(60, t_minute, t_hour, date_time.minute.get_value());
  _add(24, t_hour, t_day, date_time.hour.get_value());

  t_day += date_time.day.get_value();
  if (t_day > get_month_day(t_year, t_month)) {
    while (true) {
      int this_month_days = get_month_day(t_year, t_month);
      if (t_day < this_month_days)
        break;
      else {
        t_day -= this_month_days;
        t_month++;
      }
      if (t_month > 12) {
        t_month = 1;
        t_year++;
      }
    }
  }

  _add(12, t_month, t_year, date_time.month.get_value());
  t_year += date_time.year.get_value();

  return DateTime(t_year, t_month, t_day, t_hour, t_minute, t_second, t_milli_second);
}


DateTime DateTime::operator-(const DateTime &date_time) {
  int t_year = year.get_value(),
          t_month = month.get_value(),
          t_day = day.get_value(),
          t_hour = hour.get_value(),
          t_minute = minute.get_value(),
          t_second = second.get_value(),
          t_milli_second = milli_second.get_value();

  _reduce(1000, t_milli_second, t_second, date_time.milli_second.get_value());
  _reduce(60, t_second, t_minute, date_time.second.get_value());
  _reduce(60, t_minute, t_hour, date_time.minute.get_value());
  _reduce(24, t_hour, t_day, date_time.hour.get_value());

  t_day -= date_time.day.get_value();
  if (t_day <= 0) {
    t_month--;
    if (t_month < 1) {
      t_month = 12;
      t_year--;
    }
    if (abs(t_day) > get_month_day(t_year, t_month)) {
      while (true) {
        int this_month_days = get_month_day(t_year, t_month);
        if (abs(t_day) < this_month_days)
          break;
        else {
          t_day += this_month_days;
          t_month--;
        }
        if (t_month < 1) {
          t_month = 12;
          t_year--;
        }
      }
    } else {
      t_day += get_month_day(t_year, t_month);
    }
  }

  _reduce(12, t_month, t_year, date_time.month.get_value());
  t_year -= date_time.year.get_value();

  return DateTime(t_year, t_month, t_day, t_hour, t_minute, t_second, t_milli_second);
}
