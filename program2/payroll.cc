#include <iostream>
using namespace std;

int main() {
int emp_id[7] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489};
int hours [7];
double pay_rate [7];
double wages [7]; 
for (int i = 0; i < 7; i++) {
  cout << "Enter hours worked by employee: " << emp_id[i] << endl;
  cin >> hours[i];
  while (hours [i] < 0) {
      cout << "Enter a positive number for the hours." << endl;
      cin >> hours[i];  
      }
  cout << "Enter the hourly wage for employee: " << emp_id[i] << endl;
  cin >> pay_rate[i];
  while (pay_rate[i] < 15) {
      cout << "Enter an hourly wage above 15$." << endl;
      cin >> pay_rate[i];  
     }
wages [i] = hours[i] * pay_rate[i];
}
for (int i=0; i <7; i++) {
cout << "The gross wage for employee: " << emp_id[i] << " is " << wages [i] << "$." << endl;
}
  return 0;
}

// Comments: use of 7 repeatedly will make it hard to change in the future, use a variable
// Score: 18 / 20
