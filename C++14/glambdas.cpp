/*
  Generic lambda expressions
*/

#include <iostream>

using namespace std;

int main(){

  // using auto
  auto adder = [](auto a, auto b) {return a + b; };
  cout << adder(4, 6) << endl;
  cout << adder(4.4, 6.2) << endl;

  // using decltype
  auto add = [](auto a, auto b) -> decltype(b) { return a + b; };
  cout << add(4, 2) << endl; // return int
  cout << add(8.2, 4) << endl; // return int
  cout << add(3, 4.2) << endl; // return double

  return 0;
}
