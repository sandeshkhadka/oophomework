/* 10. Write a program to add two integer numbers and from two different objects
and place it in third object and display the result. Use the concept of
“returning objects from function”. */

#include <iostream>
using namespace std;
class number {
private:
  int a;

public:
  number() { a = 0; }
  number(int x) { a = x; }
  number add(number x) {
    number temp;
    temp.a = a + x.a;
    return temp;
  }
  void display() { cout << " a = " << a << endl; }
};
int main() {
  number a(10), b(20), c;
  c = a.add(b);
  c.display();
  cout << "Submitted by Sandesh Khadka" << endl;
  return 0;
}
