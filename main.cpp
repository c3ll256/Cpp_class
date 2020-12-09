//#include "BasicCourse.h"

#include "Cylinder.h"
#include "Triangle.h"
#include "BackDate.h"
#include "TimeLag.h"
#include "ChristmasTree.h"
#include "Cards.h"

#include <iostream>

class C1 {
public:
  ~C1() {
    cout << "C1" << endl;
  }
};

class C2 {
private:
  C1 c1;
public:
  ~C2() {
    cout << "C2" << endl;
  }
};

using namespace std;

int main() {
//  BasicCourse bc;
//  bc.min();

//  Cylinder cy(12, 10);
//  cout << cy.cylinder_side_area() << endl;
//  cout << cy.cylinder_volume() << endl;
//  cout << cy.circle_area() << endl;
//  cout << cy.circle_perimeter() << endl;
//
//  Triangle tri(2,2,2);
//  cout << tri.triangle_area() << endl;
//  cout << tri.triangle_perimeter() << endl;
//  cout << tri.triangle_type_angle() << endl;
//  cout << tri.triangle_type_border() << endl;
//
//  BackDate bcd({2020,10,3}, 30);
//  Date back_date = bcd.count_date();
//  cout << back_date.year << endl;
//  cout << back_date.month << endl;
//  cout << back_date.day << endl;
//
//  TimeLag tml("2020-10-10 10:10:10", "2020-10-10 10:10:20");
//  cout << tml.time_lag_count() << endl;
//
//  ChristmasTree tree(70);
//  tree.print_christmas_tree();
//
//  Cards cards;
//  Card *card = new Card("12345","yoda");
//  string id = card->get_id();
//
//  cards.add_card(card);
//  cout << cards.find_card_by_id(id)->get_register_name() << endl;
//
//  cards.delete_card_by_id(id);
//
//  cout << cards.is_empty();

  C2 c2;
  return 0;
}
