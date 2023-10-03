/* 6. Write a program to read two integer numbers and display it. Use
constructor to read the data. */

#include <iostream>
using namespace std;
class coordinate {
private:
  int x, y;

public:
  coordinate(int a, int b) {
    x = a;
    y = b;
  }
  void display() {
    cout << " x = " << x << endl;
    cout << " y = " << y << endl;
  }
};
int main() {
  coordinate a(10, 20);
  a.display();
  cout << "Submitted by Sandesh Khadka" << endl;
  return 0;
}
