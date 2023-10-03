#include <iostream>
using namespace std;
class weight {
  float w;

public:
  void
  calculateWeight(float m,
                  float g = 9.8) // here g = 9.8 is used as default argument
  {
    w = m * g;
    cout << "weight=" << w << "N" << endl;
  }
};
int main() {
  weight ob;
  ob.calculateWeight(10);
  cout << "Sumbmitted by Sandesh Khadka\n";
  return 0;
}
