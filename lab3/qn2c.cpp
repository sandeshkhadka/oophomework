/* 2 c) Write a program to find largest of two numbers by overloading ( > )
operator. */
#include <iostream>
using namespace std;
class number {
  int n;

public:
  number(int x) { n = x; }
  void print() { cout << n << endl; }
  number operator>(number &y) {
    if (n > y.n) {
      return *this;
    } else {
      return y;
    }
  }
};

int main() {
  number a(10), b(20), c(30);
  cout << "a = ";
  a.print();
  cout << "b = ";
  b.print();
  cout << "c = ";
  c.print();
  number d = a > b;
  number e = b > c;
  number f = c > a;
  cout << "Largest of a and b is ";
  d.print();
  cout << "Largest of b and c is ";
  e.print();
  cout << "Largest of c and a is ";
  f.print();
  cout << "Submitted by Sandesh Khadka" << endl;
  return 0;
}
