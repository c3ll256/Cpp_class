//
// Created by C3ll256 on 15/12/2020.
//

#ifndef CPP_CLASS_MONTH_H
#define CPP_CLASS_MONTH_H

#include "Date.h"

class Month : public Date {
public:
  Month(int year, int month) : Date(month) {};
};

#endif //CPP_CLASS_MONTH_H
