// 5.Write a program to show the concept of pure virtual function.

#include <iostream>
using namespace std;

class A {
public:
  virtual void show() = 0; // pure virtual function
};
class B : public A {
public:
  void show()
  // pure virtual function is overriden here
  {
    cout << "show method is implemented here" << endl;
  }
};
int main() {
  A *ptr;
  ptr = new B;
  ptr->show();
  cout << "Submitted by Sandesh Khadka" << endl;
  return 0;
}
