#include <iostream>
#include <cmath>

using namespace std;

int main() {
double r = 0;
double n = 0;
double L = 0;
double annual = 0;
cout << "What is the Loan amount?" << endl;
cin >> L;
cout << "What is the annual interest rate?" << endl;
cin >> annual;
r = annual / 1200; 
cout << "What is the number of payments?" << endl;
cin >> n;
double Principal = L * ( r * pow(1+r,n) ) / ( pow(1+r,n) -1 );
double amount_paid = Principal * n ;
double Interest_Payment = amount_paid - L ; 
cout << "Loan Amount: $" << L << endl;
cout << "Monthly Interest Rate: " << r*100 << "%" << endl; 
cout << "Number of Payments: " << n << endl;
cout << "Monthly Payment: $" << Principal << endl;
cout << "Amount Paid Back: $" << amount_paid << endl;
cout << "Interest Paid: $" << Interest_Payment << endl; 
  return 0;
}
// Comments: declare variables as close to where you need them as possible.

// Score: 18 / 20
