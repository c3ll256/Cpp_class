//#include "BasicCourse.h"

#include "Geometry/Cylinder.h"
#include "Geometry/Triangle.h"
#include "ChristmasTreeClass/ChristmasTree.h"
#include "CardClass/Cards.h"
#include "DateTime/DateTime.h"

#include <iostream>

using namespace std;

int main() {
//  BasicCourse bc;
//  bc.min();
//
//  Cylinder cy(12, 10);
//  cout << cy.cylinder_side_area() << endl;
//  cout << cy.cylinder_volume() << endl;
//  cout << cy.get_bottom_area() << endl;
//  cout << cy.get_bottom_perimeter() << endl;
//
//  vector<double> border = {2,2,2};
//  Triangle tri({2,2,2});
//  cout << tri.get_area() << endl;
//  cout << tri.get_perimeter() << endl;
//  cout << tri.triangle_type_angle() << endl;
//  cout << tri.triangle_type_border() << endl;

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
  DateTime dt0(1984, 6, 4, 8, 10, 10, 0);
  DateTime dt1(0, 0, 4, 40, 55, 55, 0);

  DateTime tmp0 = dt0 - dt1;
  DateTime tmp1 = dt0 + dt1;

  cout << tmp0.year.get_value() << "年" << tmp0.month.get_value() << "月" << tmp0.day.get_value() << "日"
       << tmp0.hour.get_value() << "時" << tmp0.minute.get_value() << "分" << tmp0.second.get_value() << "秒"
       << tmp0.milli_second.get_value() << "毫秒" << endl;
  cout << tmp1.year.get_value() << "年" << tmp1.month.get_value() << "月" << tmp1.day.get_value() << "日"
       << tmp1.hour.get_value() << "時" << tmp1.minute.get_value() << "分" << tmp1.second.get_value() << "秒"
       << tmp1.milli_second.get_value() << "毫秒" << endl;
  return 0;
}
