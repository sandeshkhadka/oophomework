/* 7. Convert polar to rectangle by Class type to Class type
    conversion using constructor in the destination class. */
#include <iostream>
#include <math.h>
#define PI 3.141592654
using namespace std;
class polar {
  float radius;
  float thita;

public:
  polar() { radius = 0.0, thita = 0.0; }
  polar(float r, float t) {
    radius = r;
    thita = t;
  }
  void show() {
    cout << "radius is=" << radius << " and "
         << "thita=" << thita << endl;
  }
  float getradius() { return radius; }
  float getthita() { return thita; }
};
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
  rectangle(polar p) {
    x = p.getradius() * cos(p.getthita());
    y = p.getradius() * sin(p.getthita());
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
