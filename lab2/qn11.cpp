// 11. Write a program showing the concept of Static data member.

#include <iostream>
using namespace std;
class number {
private:
  static int a;

public:
  void display() { cout << " value = " << a << endl; }
  void increment() { a++; }
};
int number::a = 10;
int main() {
  number a;
  number b;
  b.display();
  a.display();
  a.increment();
  a.display();
  b.display();
  cout << "Submitted by Sandesh Khadka" << endl;
  return 0;
}
