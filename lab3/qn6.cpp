/* 6. Convert polar to rectangle type conversion using casting operator in the
    destination class. */
#include <iostream>
#include <math.h>
#define PI 3.141592654
using namespace std;
class rectangle // destination class
{
  float x;
  float y;

public:
  rectangle() {}
  rectangle(float a, float b) {
    x = a;
    y = b;
  }
  void show() {
    cout << "x=" << x << " "
         << "y=" << y << endl;
  }
};
class polar {
  float radius;
  float thita;

public:
  polar() { radius = 0.0, thita = 0.0; }
  polar(float r, float t) {
    radius = r;
    thita = t;
  }
  operator rectangle() {
    double a = radius * cos(thita);
    double b = radius * sin(thita);
    return (rectangle(a, b));
  }
  void show() {
    cout << "radius is=" << radius << " and "
         << "thita=" << thita << endl;
  }
};
int main() {
  rectangle r1;
  polar p1(10.8167, 56.338 * PI / 180);
  r1 = p1;
  cout << "polar coordinate" << endl;
  p1.show();
  cout << "Rectangle coordiante " << endl;
  r1.show();
  cout << "Submitted by Sandesh Khadka" << endl;
  return 0;
}
