//
// Created by C3ll256 on 8/12/2020.
//

#include "Card.h"

using namespace std;

string Card::_random_id() {
  srand((unsigned int)time(NULL));
  string words = "qwertyuiopasdfghjklzxcvbnm";
  string code;
  for (int i = 0; i < 10; ++i) {
    code += words[(int)(26 * random() / (RAND_MAX + 1.0))];
  }
  return code;
}

int Card::use_amount(int off) {
  if (_amount - off < 0 || !is_blocked())
    return -1;
  else {
    _amount -= off;
    return _amount;
  }
}

int Card::add_amount(int in) {
  if (in < 0 || !is_blocked())
    return -1;
  else {
    _amount += in;
    return _amount;
  }
}

int Card::get_amount() const {
  return _amount;
}

string Card::get_id() {
  return _id;
}

string Card::get_register_id() {
  return _register_id;
}

string Card::get_register_name() {
  return _register_name;
}

string Card::set_register(string id, string name) {
  if (!is_blocked()) {
    _register_name = name;
    _register_id = id;
    return _register_id;
  } else
    return "blocked";
}

int Card::set_prev(Card *prev) {
  _prev = prev;
  return 1;
}

int Card::set_next(Card *next) {
  _next = next;
  return 1;
}

Card* Card::get_prev() {
  return _prev;
}

Card* Card::get_next() {
  return _next;
}


bool Card::is_blocked() {
  return _blocked;
}

bool Card::set_blocked() {
  _blocked = true;
  return _blocked;
}

bool Card::remove_blocked() {
  _blocked = false;
  return _blocked;
}

Card::Card(string register_id, string register_name) {
  _register_name = register_name; _register_id = register_id; _blocked = false; _id = _random_id();
}

Card::Card() {
  _register_name = ""; _register_id = ""; _blocked = false; _id = _random_id();
}
