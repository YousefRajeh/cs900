#include <cmath>
#include <iostream>
using namespace std;

int main() {
  float angle = 0.0f;
  cout << "Enter an angle (in radians): ";
  cin >> angle;

  cout << "sin: " << sin(angle) << endl;
  cout << "cos: " << cos(angle) << endl;
  cout << "tan: " << tan(angle) << endl;
  return 0;
}
