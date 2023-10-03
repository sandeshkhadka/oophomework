// 2 b). Write a program to overload ( = ) operator.
#include <iostream>
using namespace std;
class Sample {
  int num;

public:
  Sample() {}
  Sample(int n) { num = n; }
  void print() { cout << num << endl; }
  void operator=(Sample &y) {
    num = y.num;
    cout << "Copied " << y.num << endl;
  }
};
int main() {
  Sample val;
  Sample f(2);
  val = f;
  val.print();
  cout << "Submitted by Sandesh Khadka" << endl;
  return 0;
}
