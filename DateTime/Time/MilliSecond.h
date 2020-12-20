//
// Created by C3ll256 on 15/12/2020.
//

#ifndef CPP_CLASS_MILLISECOND_H
#define CPP_CLASS_MILLISECOND_H

#include "MyTime.h"

class MilliSecond : public MyTime {
public:
  explicit MilliSecond(int millisecond) : MyTime(millisecond) {};
};


#endif //CPP_CLASS_MILLISECOND_H
