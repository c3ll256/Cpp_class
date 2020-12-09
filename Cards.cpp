//
// Created by C3ll256 on 8/12/2020.
//

#include "Cards.h"

using namespace std;

Card *Cards::find_card_by_register_id(string id) {
  if (_head != nullptr) {
    Card *next = _head;
    while(next != nullptr) {
      if (next->get_register_id() == id) {
        return next; // 找到了。
      } else {
        next = next->get_next();
      }
    }
    return nullptr; // 沒找到。
  } else
    return nullptr;
}

Card *Cards::find_card_by_id(string id) {
  if (_head != nullptr) {
    Card *next = _head;
    while(next != nullptr) {
      if (next->get_id() == id) {
        return next; // 找到了。
      } else {
        next = next->get_next();
      }
    }
    return nullptr; // 沒找到。
  } else
    return nullptr;
}

int Cards::delete_card(Card *card) {
  if (_head != nullptr) {
    string card_id = card->get_id();
    Card *next = _head;
    while(next != nullptr) {
      if (next->get_id() == card_id) {
        if (_count == 1) {
          _head = nullptr; _tail = nullptr;
          delete next;
        } else {
          next->get_prev()->set_next(next->get_next());
          next->get_next()->set_prev(next->get_prev());
          delete next;
        }
        _count--;
        return 0; // 找到並刪除了。
      } else {
        next = next->get_next();
      }
    }
    return -1; // 沒找到。
  } else
    return -1;
}

int Cards::delete_card_by_id(const string& id) {
  if (_head != nullptr) {
    Card *next = _head;
    while(next != nullptr) {
      if (next->get_id() == id) {
        if (_count == 1) {
          _head = nullptr; _tail = nullptr;
          delete next;
        } else {
          next->get_prev()->set_next(next->get_next());
          next->get_next()->set_prev(next->get_prev());
          delete next;
        }
        _count--;
        return 0; // 找到並刪除了。
      } else {
        next = next->get_next();
      }
    }
    return -1; // 沒找到。
  } else
    return -1;
}

Card *Cards::add_card(Card *card) {
  if (_tail != nullptr) {
    _tail->set_next(card);
    card->set_prev(_tail);
    _tail = card;
    _count++;
  } else if (_tail == nullptr) {
    _head = card;
    _tail = card;
    _count++;
  }
  return card;
}

bool Cards::is_empty() {
  if (_count == 0)
    return true;
  else
    return false;
}

Cards::Cards() {
  _count = 0;
}

