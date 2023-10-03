#include <iostream>
using namespace std;
class student {
protected:
  int roll_number;
};
class test : protected student {
protected:
  int sub1, sub2;
};
class sports {
protected:
  int score;
};
class result : protected test, protected sports {
  int total;

public:
  void getdata() {
    cout << "Enter the roll number : ";
    cin >> roll_number;
    cout << "Enter the marks of subject 1 and subject 2 : ";
    cin >> sub1 >> sub2;
    cout << "Enter the score : ";
    cin >> score;
  }
  void calc() { total = sub1 + sub2 + score; }
  void display() {
    cout << "The roll number is : " << roll_number << endl;
    cout << "The total marks is : " << total << endl;
  }
};
int main() {
  result r;
  r.getdata();
  r.calc();
  r.display();
  cout << "Submitted by Sandesh Khadaka" << endl;
  return 0;
}
