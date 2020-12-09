//
// Created by C3ll256 on 8/12/2020.
//

#include "TimeLag.h"

using namespace std;

int TimeLag::_days_of_month(int year, int month) {
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

double TimeLag::time_lag_count() {
  time_t first, next;
  tm Tm{};
  strptime(_time_first.c_str(), "%Y-%m-%d %H:%M:%S", &Tm);
  first = mktime(&Tm);
  strptime(_time_next.c_str(), "%Y-%m-%d %H:%M:%S", &Tm);
  next = mktime(&Tm);
  return abs(difftime(next, first));
}

// 输入合法性验证
bool TimeLag::_input_verify(const string& _time) {
  regex date_rag(R"([1-9]\d{3}-(0[1-9]|1[0-2])-(0[1-9]|[1-2][0-9]|3[0-1]) (20|21|22|23|[0-1]\d):[0-5]\d:[0-5]\d)");
  smatch sm_month;
  smatch sm_day;;
  regex_search(_time, sm_month,  regex("-.*?(?=-)"));
  regex_search(_time, sm_day,  regex("-\\w+?(?= )"));
  string month_str = string(sm_month[0]).substr(1) , day_str = string(sm_day[0]).substr(1);
  if(regex_match(_time, date_rag) && stoi(day_str) <= _days_of_month(stoi(_time.substr(0, 4)), stoi(month_str)))
    return true;
  else
    return false;
}

TimeLag::TimeLag(std::string time_first, std::string time_next) {
  _time_first = time_first; _time_next = time_next;
  if(!_input_verify(_time_first) && !_input_verify(_time_next))
    throw invalid_argument("Illegal arguments.");
}