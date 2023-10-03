#include <iostream>

using namespace std;

class alpha {
protected:
  int x;

public:
  alpha(int i) {
    x = i;
    cout << "alpha initialized" << endl;
  }
  void show_x() { cout << "x = " << x << endl; }
};

class beta {
protected:
  int y;

public:
  beta(int j) {
    y = j;
    cout << "beta initialized" << endl;
  }
  void show_y() { cout << "y = " << y << endl; }
};

class gamma : public beta, public alpha {
protected:
  int m, n;

public:
  gamma(int a, int b, int c, int d) : alpha(a), beta(b) {
    m = c;
    n = d;
    cout << "gamma initialized" << endl;
  }
  void show_mn() {
    cout << "m = " << m << endl;
    cout << "n = " << n << endl;
  }
};

int main() {
  gamma g(5, 10, 15, 20);
  cout << endl;
  g.show_x();
  g.show_y();
  g.show_mn();
  cout << "Submitted by Sandesh Khadaka" << endl;
  return 0;
}
