//
// Created by C3ll256 on 8/12/2020.
//

#ifndef CPP_CLASS_TIME_LAG_H
#define CPP_CLASS_TIME_LAG_H

/*
 * 問題紀錄：
 * 按照標準寫好就好，但設計錯誤的時候思考了一下，最後決定還是按照標準拋出一個錯誤，讓外部去 catch 。
 * */

#include <iostream>
#include <regex>
#include <cstdlib>
#include <ctime>
#include <cmath>


class TimeLag {
private:
  std::string _time_first;
  std::string _time_next;
  int _days_of_month(int year, int month);
  bool _input_verify(const std::string& _time);
public:
  double time_lag_count();
  TimeLag(std::string time_first, std::string time_next);
};


#endif //CPP_CLASS_TIME_LAG_H
