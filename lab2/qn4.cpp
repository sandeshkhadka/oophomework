/* 4. Create a class called student with three data members (student name[20],
roll_no, Address) function called input-data() to take details of the students
from the user, and a function called display_data( )to display the details of
the students. In main, create two objects of the class student and for each call
*/

#include <iostream>
using namespace std;
class student {
private:
  char name[20], address[20];
  int roll;

public:
  void input_data() {
    cout << " Enter name: ";
    cin >> name;
    cout << " Enter address: ";
    cin >> address;
    cout << " Enter roll no: ";
    cin >> roll;
  }
  void display_data() {
    cout << " Name = " << name << endl;
    cout << " Address = " << address << endl;
    cout << " Roll no = " << roll << endl;
  }
};

int main() {
  student a, b;
  a.input_data();
  b.input_data();
  a.display_data();
  b.display_data();
  cout << "Submitted by Sandesh Khadka" << endl;
  return 0;
}
