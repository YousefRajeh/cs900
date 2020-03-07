#include <cmath>
#include <iostream>
using namespace std;

int main() {
  float r = 0.0f;
  cout << "Enter the monthly interest rate: ";
  cin >> r;
  r /= 100;

  int n = 0;
  cout << "Enter the number of payments: ";
  cin >> n;

  float l = 0.0f;
  cout << "Enter the total amount of the loan: ";
  cin >> l;

  cout << "Loan Amount: $" << l << endl;
  cout << "Monthly Interest Rate: " << r * 100 << "%" << endl;
  cout << "Number of Payments: " << n << endl;

  float monthly_payment = (r * pow(1 + r, n)) / (pow(1 + r, n) - 1) * l;
  cout << "Monthly Payment: $" <<  monthly_payment << endl;

  float total_paid = monthly_payment * n;
  cout << "Amount Paid Back: $" << total_paid << endl;

  float interest_paid = total_paid - l;
  cout << "Interest Paid: $" << interest_paid << endl;
  return 0;
}
