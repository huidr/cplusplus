/*
  Generic lambda expressions
*/

#include <iostream>
#include <functional> // for std::function

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

  // explicitly specifying return type
  auto multiply = [](auto a, auto b) -> int { return a*b; };

  // std::function allows to declare signature of a lambda before defining it as lambda
  std::function<int(int)> CountOnes; // signature
  CountOnes = [&CountOnes](int n) -> int { return (0==n) ? 0 : CountOnes(n/2) + (n%2); };
  cout << CountOnes(12) << endl;

  
  return 0;
}
