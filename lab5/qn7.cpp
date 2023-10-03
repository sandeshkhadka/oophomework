// 7.Write a program to show the concept of static function and static member

#include <iostream>
using namespace std;

class A {
  static int x;

public:
  static void show() { cout << "Value of x is: " << x << endl; }
  A() { x++; }
};
int A::x = 0;
int main() {
  A a;
  A::show();
  A b;
  A::show();
  cout << "Submitted by Sandesh Khadka" << endl;
  return 0;
}
