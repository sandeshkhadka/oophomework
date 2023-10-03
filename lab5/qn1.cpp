// 1. Write a program to solve the concept of virtual function.

#include <iostream>
using namespace std;

class Base {
public:
  virtual void show() { cout << "Base class\n"; }
};

class Derived : public Base {
public:
  void show() { cout << "Derived Class\n"; }
};

int main() {
  Base *bptr;
  Base b;
  Derived d;
  bptr = &b;
  bptr->show();
  bptr = &d;
  bptr->show();
  cout << "Submitted by Sandesh Khadka" << endl;
  return 0;
}
