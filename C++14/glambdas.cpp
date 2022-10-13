/*
  Generic lambda expressions
*/

#include <iostream>

using namespace std;

int main(){

  auto adder = [](auto a, auto b) {return a + b; };
  cout << adder(4.2, 7) << endl;

  return 0;
}
