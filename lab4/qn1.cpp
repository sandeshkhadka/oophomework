/* 1. Write a program of single inheritance :
Base Class : B
   Private member : a (int)
   Public member: b (int)
Derived Class : D
   Private member : c (int)
  Calculate c = a* b and display */

#include <iostream>
using namespace std;

class B {
private:
  int a;

public:
  int b;
  void getdata() {
    cout << "Enter the value of a and b : ";
    cin >> a >> b;
  }
  int geta() { return a; }
};

class D : public B {
private:
  int c;

public:
  void calc() { c = geta() * b; }
  void display() { cout << "The value of c is : " << c << endl; }
};

int main() {
  D d;
  d.getdata();
  d.calc();
  d.display();
  cout << "Submitted by Sandesh Khadaka" << endl;
  return 0;
}
