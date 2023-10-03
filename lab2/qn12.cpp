/* 12. Write a program to read name,
    age and salary of an employee using C++ structure. */

#include <iostream>
using namespace std;
struct employee {
  char name[20];
  int age;
  float salary;
};
int main() {
  employee a;
  cout << " Enter name: ";
  cin >> a.name;
  cout << " Enter age: ";
  cin >> a.age;
  cout << " Enter salary: ";
  cin >> a.salary;
  cout << " Name: " << a.name << endl;
  cout << " Age: " << a.age << endl;
  cout << " Salary: " << a.salary << endl;
  cout << "Submitted by Sandesh Khadka" << endl;
  return 0;
}
