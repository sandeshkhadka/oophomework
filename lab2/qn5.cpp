/* 5. Create a new class named city that will have two member variables
Cityname(char[20]},and DistFromKTM(float). Add member functions to set and
retrieve the CityName and DistFrom KTM separately. Add new member functions
AddDistance that takes two arguments of class City and returns the sum of
DistFrom KTM of two arguments. In main function,initialize three city objects.
Set the first and second city to be Pokhara and Dhangadi. Display the sum of
DistFromKTM of Pokhara and Dhangadi calling AddDistance function of third city
object. (use objects as function Arguments). */

#include <iostream>
using namespace std;
class city {
private:
  char cityname[20];
  float distfromktm;

public:
  void setcityname() {
    cout << " Enter city name: ";
    cin >> cityname;
  }
  void setdistfromktm() {
    cout << " Enter distance from ktm: ";
    cin >> distfromktm;
  }
  char *getcityname() { return cityname; }
  float getdistfromktm() { return distfromktm; }
  float adddistance(city a, city b) {
    return a.getdistfromktm() + b.getdistfromktm();
  }
};
int main() {
  city a, b, c;
  a.setcityname();
  a.setdistfromktm();
  b.setcityname();
  b.setdistfromktm();
  cout << " Sum of distance from ktm of " << a.getcityname() << " and "
       << b.getcityname() << " is " << c.adddistance(a, b) << endl;
  cout << "Submitted by Sandesh Khadka" << endl;
  return 0;
}
