/* 3. WAP input name, address, faculty and roll no of a student and display it.
Use both member functions defining inside the class and outside the class. */

#include <iostream>
using namespace std;
class student {
private:
  char name[20], address[20], faculty[20];
  int roll;

public:
  void getdata() {
    cout << " Enter name: ";
    cin >> name;
    cout << " Enter address: ";
    cin >> address;
    cout << " Enter faculty: ";
    cin >> faculty;
    cout << " Enter roll no: ";
    cin >> roll;
  }
  void display();
};
void student::display() {
  cout << " Name = " << name << endl;
  cout << " Address = " << address << endl;
  cout << " Faculty = " << faculty << endl;
  cout << " Roll no = " << roll << endl;
}

int main() {
  student a;
  a.getdata();
  a.display();
  cout << "Submitted by Sandesh Khadka" << endl;
  return 0;
}
