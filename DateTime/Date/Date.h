//
// Created by C3ll256 on 15/12/2020.
//

#ifndef CPP_CLASS_DATE_H
#define CPP_CLASS_DATE_H

class Date {
protected:
  int _value{};
public:
  int get_value() const { return _value; };

  int set_value(int value) {
    _value = value;
    return _value;
  };

  int operator++() {
    _value++;
    return _value;
  };

  int operator--() {
    _value--;
    return _value;
  };

  explicit Date(int value) : _value(value) {};
};


#endif //CPP_CLASS_DATE_H
