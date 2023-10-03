// Solve the following form of inheritance. [ use virtual base class] using at
// least one constructor in each class
#include <iostream>
using namespace std;
class student {
protected:
  int roll_number;

public:
  student() {
    cout << "Enter roll number: ";
    cin >> roll_number;
  }
  void put_number(void) { cout << "Roll No:" << roll_number << "\n"; }
};
class test : virtual public student {
protected:
  float part1, part2;

public:
  test() {
    cout << "Enter marks obtained in part 1: ";
    cin >> part1;
    cout << "Enter marks obtained in part 2: ";
    cin >> part2;
  }

  void put_marks(void) {
    cout << "Marks obtained:"
         << "\n"
         << "part1 = " << part1 << "\n"
         << "part2 =" << part2 << "\n";
  }
};
class sports : public virtual student {
protected:
  float score;

public:
  sports() {
    cout << "Enter sports score: ";
    cin >> score;
  }
  void put_score(void) { cout << "sports wt:" << score << "\n"; }
};
class result : public test, public sports {
  float total;

public:
  void display() {
    total = part1 + part2 + score;
    put_number();
    put_marks();
    put_score();
    cout << "\n Total score:" << total << "\n";
  }
};
int main() {
  result student1;
  student1.display();
  cout << "Submitted by Sandesh Khadka" << endl;
}
