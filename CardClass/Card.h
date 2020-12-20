//
// Created by C3ll256 on 8/12/2020.
//

#ifndef CPP_CLASS_CARD_H
#define CPP_CLASS_CARD_H

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

class Card {
private:
  int _amount = 0;
  bool _blocked;
  string _id;
  string _register_id;
  string _register_name;
  string _random_id();
  Card *_prev = nullptr;
  Card *_next = nullptr;
public:
  bool remove_blocked();
  bool set_blocked();
  bool is_blocked();
  int set_prev(Card *prev);
  int set_next(Card *next);
  Card* get_prev();
  Card *get_next();

  int get_amount() const;

  int use_amount(int off);
  int add_amount(int in);
  string set_register(string id, string name);
  string get_id();
  string get_register_id();
  string get_register_name();
  Card(string register_id, string register_name);
  Card();
};


#endif //CPP_CLASS_CARD_H
