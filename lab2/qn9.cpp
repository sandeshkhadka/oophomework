// 9. Write a program to show the concept of a destructor.
//
#include <iostream>
using namespace std;
class number {
private:
  int a;

public:
  number(int x) { a = x; }
  ~number() { cout << " Object destroyed" << endl; }
  void display() { cout << " a = " << a << endl; }
};

int main() {
  number a(10);
  a.display();
  cout << "Submitted by Sandesh Khadka" << endl;
  return 0;
}
