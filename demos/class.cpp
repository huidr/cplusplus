#include <iostream>
#include <string>
using namespace std;

class myClass {
private:
  char *ch;                           /* for dynamic memory allocation */
  const int i;                        /* Constant data member */
  mutable double j;                   /* Mutable data member */
public:
  myClass();                          /* Default constructor */
  myClass(string str, int iv = 0, double jv = 0.0);
  myClass(const myClass &obj);        /* Copy constructor */
  ~myClass();                         /* Desctructor */
  //myClass& operator=(const myClass &obj);    /* Copy assignment operator */
  void print() const;               /* Constant method */
};
inline myClass::myClass(): i(0), j(0.0) {  /* inline declared */
  ch = new char(' ');
  cout << "Default constructor called";
}
inline myClass::myClass(const char* str, int iv = 0, double jv = 0.0) {
  int size = len(str);
  ch = new char[size];
  for (int i = 0; i < size; i++) {
    ch[i] = str[i];
  }
  cout << "Constructor called";
}
myClass::myClass(myClass &obj): i(obj.i), j(obj.j) {
  ch = new char(obj.ch);
  cout << "Copy constructor called";
}
  myClass::~myClass() {
    delete[] ch;
    cout << "Destructor called";
  }
void myClass::print() const {
  cout << "Printing data...";
}

int main() {
  myClass obj;
  const myClass objc;
}
