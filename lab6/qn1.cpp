/* 1. Write a program to show addition, subtraction, division, multiplication
operations making four different functions. Test your program by using the
concept of template handling. */

#include <iostream>
using namespace std;

template <class T> T add(T a, T b) { return a + b; }
template <class T> T sub(T a, T b) { return a - b; }
template <class T> T mul(T a, T b) { return a * b; }
template <class T> T divide(T a, T b) { return a / b; }

int main() {
  int a = 18, b = 6;
  float c = 6.5, d = 6.7;
  cout << "Addition: " << add(c, d) << endl;
  cout << "Subtraction: " << sub(c, d) << endl;
  cout << "Multiplication: " << mul(a, b) << endl;
  cout << "Division: " << divide(a, b) << endl;
  cout << "Submitted by Sandesh Khadka" << endl;
  return 0;
}
