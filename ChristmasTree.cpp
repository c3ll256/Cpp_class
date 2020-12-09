#include "ChristmasTree.h"

using namespace std;

void ChristmasTree::_print_star() {
  cout << '*';
}

void ChristmasTree::_print_blank_space() {
  cout << ' ';
}

void ChristmasTree::_print_leaf() {
  int k  = _length / 2, end = _next_line + 18;
  for (int i = 1; i != end; i++)
  {
    for (int space = 1; space <= k - i + 1; space++)
      _print_blank_space();
    for (int j = 1; j <= i * 2 - 1; j++)
      _print_star();
    cout << endl;
    if (i == _next_line && i != _next_line + 18)
    {
      i /= 2.5;
      _next_line += 6;
    }
  }
}

void ChristmasTree::_print_trunk() {
  for (int i = 1; i <= _height / 9; i++)
  {
    for (int space = 1; space <= (_length - (_length / 10)) / 2; space++)
      _print_blank_space();
    for (int j = 1; j <= _length / 10; j++)
      _print_star();
    cout << endl;
  }
}

void ChristmasTree::print_christmas_tree() {
  _print_leaf();
  _print_trunk();
}

ChristmasTree::ChristmasTree(int height) {
  if (height < 21)
    height = 21;
  if (height > 100)
    height = 100;
  _height = height;
  _length = height * 2 - 1;
  _next_line = height / 3 - 6;
}
