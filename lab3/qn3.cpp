// 3. Write a program showing basic to class type conversion
//
#include <iostream>
using namespace std;
class complex {
  float x, y;

public:
  complex() {}
  complex(float real, float imag = 0) {
    x = real;
    y = imag;
  }
  void display(void) { cout << x << "i+" << y << "\n"; }
};

int main() {
  complex c1;
  float m = 5;
  c1 = m; // basic to class type conversion
  c1.display();
  cout << "Submitted by Sandesh Khadka" << endl;
  return 0;
}
