// 5. Write a program to show the basic concept of exception handling

#include <iostream>
using namespace std;

int main() {
  int a, b;
  cout << "Enter two numbers: ";
  cin >> a >> b;
  try {
    if (b == 0) {
      throw b;
    }
    cout << "a/b = " << a / b << endl;
  } catch (int i) {
    cout << "Exception caught: Division by zero" << endl;
  }
  cout << "Submitted by Sandesh Khadka" << endl;
  return 0;
}
