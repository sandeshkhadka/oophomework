// 1. Write a program to overload unary minus operator.
#include <iostream>
using namespace std;
class space {
  int x, y, z;

public:
  void getdata(int a, int b, int c);
  void display();
  void operator-(); // overloaded unary minus
};
void space::getdata(int a, int b, int c) {
  x = a;
  y = b;
  z = c;
}
void space ::display(void) {
  cout << "(" << x << "," << y << "," << z << ")\n";
}
void space ::operator-() {
  x = -x;
  y = -y;
  z = -z;
}
int main() {
  space s;
  s.getdata(10, -20, 30);
  cout << "S:";
  s.display();
  -s; // activates operator-() function
  cout << "S:";
  s.display();
  cout << "Submitted by Sandesh Khadka" << endl;
}
