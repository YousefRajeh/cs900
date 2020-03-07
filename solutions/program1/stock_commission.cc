#include <iostream>
using namespace std;

int main() {
  int shares = 750;
  float price = 35.00;

  float total = shares * price;
  float comission = total * 0.02;

  cout << "Total paid for stock: " << total << endl;
  cout << "Total comission: " << comission << endl;
  cout << "Total paid: " << total + comission << endl;
  return 0;
}
