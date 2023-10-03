/* 1. WAP that reads two numbers. Calculate the smallest one and then print the
smallest one defining functions outside the class. */

#include <iostream>
using namespace std;
class smallest {
private:
  int a, b, small;

public:
  void getdata();
  void processing();
  void display();
};
void smallest::getdata() {
  cout << " Enter two numbers: " << endl;
  cin >> a >> b;
}
void smallest::display() {
  cout << " Smallest of two numbers is = " << small << endl;
}
void smallest::processing() {
  if (a <= b)
    small = a;
  else
    small = b;
}
int main() {
  smallest a;
  a.getdata();
  a.processing();
  a.display();
  cout << "Submitted by Sandesh Khadka" << endl;
  return 0;
}
