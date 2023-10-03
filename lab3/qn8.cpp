/* 8. Convert rectangle to polar type conversion using casting operator in the
    destination class. */

#include <iostream>
#include <math.h>
using namespace std;
class rectangle {
  float x, y;

public:
  rectangle(float a, float b) {
    x = a;
    y = b;
  }
  float get_x() { return (x); }
  float get_y() { return (y); }
};
class polar {
  float radius, thita;

public:
  void show();
  polar() {}
  polar(rectangle r) {
    float tempx = r.get_x();
    float tempy = r.get_y();
    radius = sqrt(tempx * tempx + tempy * tempy);
    thita = atan(tempy / tempx);
  }
  operator rectangle() {
    float a = radius * cos(thita);
    float b = radius * sin(thita);
    return (rectangle(a, b));
  }
};

void polar ::show() {
  cout << "radius is:" << radius << endl;
  cout << "thita is:" << thita * (180 / 3.14) << endl;
}
int main() {
  rectangle r(6, 9);
  polar p = r;
  p.show();
  cout << "Submitted by Sandesh Khadka" << endl;
  return 0;
}
