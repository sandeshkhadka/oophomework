// 4. Write a program to overload function template.
#include <iostream>
#include <string.h>
using namespace std;
template <class T> void display(T x) {
  cout << "Template display :" << x << endl;
}
void display(int x) { cout << "Explicity display :" << x << "\n"; }
int main() {
  display(100);
  display(12.34);
  display('C');
  cout << "Submitted by Sandesh Khadka" << endl;
  return 0;
}
