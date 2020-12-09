/*
 * 問題：編寫輸出正確圖的程序花了不少時間。
 * */

#ifndef CPP_CLASS_CHRISTMAS_TREE_H
#define CPP_CLASS_CHRISTMAS_TREE_H

#include <iostream>

class ChristmasTree {
private:
  int _height;
  int _length;
  int _next_line;
  static void _print_star();
  static void _print_blank_space();
  void _print_leaf();
  void _print_trunk();
public:
  void print_christmas_tree();
  ChristmasTree(int height);
};


#endif //CPP_CLASS_CHRISTMAS_TREE_H
