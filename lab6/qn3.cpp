// 3. Write a program to swap two numbers using function template.

#include <iostream>
using namespace std;

template <class T> void swap1(T &a, T &b) {
  T temp = a;
  a = b;
  b = temp;
}

int main() {
  int a = 18, b = 6;
  float c = 6.5, d = 6.7;
  cout << "Before swapping: " << endl;
  cout << "a = " << a << ", b = " << b << endl;
  cout << "c = " << c << ", d = " << d << endl;
  swap1(a, b);
  swap1(c, d);
  cout << "After swapping: " << endl;
  cout << "a = " << a << ", b = " << b << endl;
  cout << "c = " << c << ", d = " << d << endl;
  cout << "Submitted by Sandesh Khadka" << endl;
  return 0;
}
