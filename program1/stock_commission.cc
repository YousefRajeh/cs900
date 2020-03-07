#include <iostream>
using namespace std;

int main() {
double shares = 750 * 35;
  
  double commision = shares /50;
  double total = commision + shares;
cout << "Stock price: " << shares << endl;
cout << "commision: " << commision << endl;
cout << "total: " << total << endl;
  return 0;
}

// Comments: math seems wrong here?
//
// Score: 15 / 20
