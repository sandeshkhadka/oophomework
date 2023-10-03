/* 6.Write a program to read information of three employees (name, address and
salary). Make three separate classes for each employee. Now, calculate the total
salary of three employee and display all information. Use the concept of friend
function */

#include <iostream>

using namespace std;
class e2;
class e3;
class e1 {
  char name[20];
  char address[20];
  float salary;

public:
  friend void getdata(e1 &x, e2 &y, e3 &z);
  friend void display(e1 &x, e2 &y, e3 &z);
};
class e2 {
  char name[20];
  char address[20];
  float salary;

public:
  friend void getdata(e1 &x, e2 &y, e3 &z);
  friend void display(e1 &x, e2 &y, e3 &z);
};
class e3 {
  char name[20];
  char address[20];
  float salary;

public:
  friend void getdata(e1 &x, e2 &y, e3 &z);
  friend void display(e1 &x, e2 &y, e3 &z);
};

void getdata(e1 &x, e2 &y, e3 &z) {
  cout << "Enter the name of employee 1: ";
  cin >> x.name;
  cout << "Enter the address of employee 1: ";
  cin >> x.address;
  cout << "Enter the salary of employee 1: ";
  cin >> x.salary;
  cout << "Enter the name of employee 2: ";
  cin >> y.name;
  cout << "Enter the address of employee 2: ";
  cin >> y.address;
  cout << "Enter the salary of employee 2: ";
  cin >> y.salary;
  cout << "Enter the name of employee 3: ";
  cin >> z.name;
  cout << "Enter the address of employee 3: ";
  cin >> z.address;
  cout << "Enter the salary of employee 3: ";
  cin >> z.salary;
}

void display(e1 &x, e2 &y, e3 &z) {
  cout << "Name of employee 1: " << x.name << endl;
  cout << "Address of employee 1: " << x.address << endl;
  cout << "Salary of employee 1: " << x.salary << endl;
  cout << "Name of employee 2: " << y.name << endl;
  cout << "Address of employee 2: " << y.address << endl;
  cout << "Salary of employee 2: " << y.salary << endl;
  cout << "Name of employee 3: " << z.name << endl;
  cout << "Address of employee 3: " << z.address << endl;
  cout << "Salary of employee 3: " << z.salary << endl;
  cout << "Total salary of all employees: " << x.salary + y.salary + z.salary
       << endl;
}
int main() {
  e1 e1;
  e2 e2;
  e3 e3;
  getdata(e1, e2, e3);
  display(e1, e2, e3);
  cout << "Submitted by Sandesh Khadka" << endl;
  return 0;
}
