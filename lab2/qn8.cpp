/* 8. Write a program to add two complex numbers using the concept of
   constructor overloading. */

#include <iostream>
using namespace std;
class complex {
private:
  int real, imag;

public:
  complex() {
    real = 0;
    imag = 0;
  }
  complex(int a, int b) {
    real = a;
    imag = b;
  }
  complex(complex &x) {
    real = x.real;
    imag = x.imag;
  }
  void display() {
    cout << " real = " << real << endl;
    cout << " imag = " << imag << endl;
  }
  complex add(complex x) {
    complex temp;
    temp.real = real + x.real;
    temp.imag = imag + x.imag;
    return temp;
  }
};
int main() {
  complex a(10, 20), b(20, 30), c;
  c = a.add(b);
  c.display();
  cout << "Submitted by Sandesh Khadka" << endl;
  return 0;
}
