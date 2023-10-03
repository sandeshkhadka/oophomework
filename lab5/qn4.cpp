/* 4. Write a program to compare the age of three persons and display the
information of elder one. Use “this” pointer to return the information of the
person. */
#include <iostream>
#include <string.h>

using namespace std;
class person {
  char name[20];
  float age;

public:
  person(char s[], float a) {
    strcpy(name, s);
    age = a;
  }
  person greater(person &x) {
    if (x.age >= age)
      return x;
    else
      return *this;
  }
  void display(void) {
    cout << "Name:" << name << "\n"
         << "Age:" << age << "\n";
  }
};
int main() {
  char name1[10] = "Ram";
  char name2[10] = "Shyam";
  person P1(name1, 37.50), P2(name2, 29.0);
  person P = P1.greater(P2);
  cout << "Elder person is: \n";
  P.display();
  cout << "Submitted by Sandesh Khadka" << endl;
  return 0;
}
