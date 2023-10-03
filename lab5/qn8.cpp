// Write a program of virtual destructor.

#include <iostream>
using namespace std;

class Base {
public:
  Base() { cout << "Constructor of Base class\n"; }
  virtual ~Base() { cout << "Destructor of Base class\n"; }
};

class Derived : public Base {
public:
  Derived() { cout << "Constructor of Derived class\n"; }
  ~Derived() { cout << "Destructor of Derived class\n"; }
};

int main() {
  Base *bptr;
  bptr = new Derived();
  delete bptr;
  cout << "Submitted by Sandesh Khadka" << endl;
  return 0;
}
