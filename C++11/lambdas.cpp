/* Lambda expressions in C++ */

#include <iostream>

using namespace std;

int main(){

  // simple printing function
  auto print = []() { cout << "I am no gay." << endl; };
  print();

  // taking parameter
  auto adder = [](int x, int y) { return x+y; };
  cout << adder(2, 4);
  
  // capture
  int n = 2;
  auto doubler = [n](int m) { return n*m; };

  cout << doubler(2) << endl;
  cout << doubler(5) << endl;

  // inline
  cout << [](int x, int y) { return x*y;} (2,4) << endl;
  
  return 0;
}
