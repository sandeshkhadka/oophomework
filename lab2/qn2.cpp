/* 2.WAP declaring a class and object to input assessment marks and practical
marks defining functions setmark() and publishmark(). Define the function inside
the class. */

#include <iostream>
using namespace std;
class marks {
private:
  int assessment, practical;

public:
  void setmark() {
    cout << " Enter assessment marks: " << endl;
    cin >> assessment;
    cout << " Enter practical marks: " << endl;
    cin >> practical;
  }
  void publishmark() {
    cout << " Assessment marks = " << assessment << endl;
    cout << " Practical marks = " << practical << endl;
  }
};
int main() {
  marks a;
  a.setmark();
  a.publishmark();
  cout << "Submitted by Sandesh Khadka" << endl;
  return 0;
}
