/* 7. Write a program to make one object to read one integer data. Make another
object and copy the data of first object to it. (Use the concept of copy
constructor). */

#include <iostream>
using namespace std;
class number {
private:
  int a;

public:
  number(int x) { a = x; }
  number(number &x) { a = x.a; }
  void display() { cout << " a = " << a << endl; }
};
int main() {
  number a(10);
  number b = a;
  a.display();
  b.display();
  cout << "Submitted by Sandesh Khadka" << endl;
  return 0;
}
