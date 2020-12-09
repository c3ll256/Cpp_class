//
// Created by C3ll256 on 8/12/2020.
//

#ifndef CPP_CLASS_CARDS_H
#define CPP_CLASS_CARDS_H

#include <iostream>
#include "Card.h"

using namespace std;

class Cards {
private:
  int _count;
  Card *_head = nullptr;
  Card *_tail = nullptr;
public:
  bool is_empty();
  Card* find_card_by_id(string id);
  Card* find_card_by_register_id(string id);
  int delete_card_by_id(const string& id);
  int delete_card(Card *card);
  Card* add_card(Card *card);
  Cards();
};


#endif //CPP_CLASS_CARDS_H
