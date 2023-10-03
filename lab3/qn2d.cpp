// d) Write a program to overload “ ++ “ (both prefix and postfix ) operator.
//
#include <iostream>

using namespace std;

class number {
  int n;

public:
  number(int x) { n = x; }
  int value() { return n; }
  number operator++() {
    number temp(0);
    temp.n = ++n;
    return temp;
  }
  number operator++(int) {
    number temp(0);
    temp.n = n++;
    return temp;
  }
};

int main() {
  number a(10), b(20), c(30);
  cout << "a = " << a.value() << endl;
  cout << "b = " << b.value() << endl;
  cout << "c = " << c.value() << endl;
  cout << "++a = " << (++a).value() << endl;
  cout << "b++ = " << (b++).value() << endl;
  cout << "a = " << a.value() << endl;
  cout << "b = " << b.value() << endl;
  cout << "c = " << c.value() << endl;
  cout << "Submitted by Sandesh Khadka" << endl;
  return 0;
}
