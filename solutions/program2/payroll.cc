#include <iostream>
using namespace std;

int get_hours(int emp_id) {
  while (true) {
    int hours = 0;
    cout << "Enter the hours for employee " << emp_id << ": ";
    cin >> hours;

    if (hours < 0) {
      cout << "Hours worked cannot be negative. Try again." << endl;
      continue;
    }

    return hours;
  }
}

float get_pay_rate(int emp_id) {
  while (true) {
    float pay_rate = 0.0f;
    cout << "Enter the pay rate for employee " << emp_id << ": ";
    cin >> pay_rate;

    if (pay_rate < 15) {
      cout << "Pay rate cannot be lower than 15.00 per hour. Try again." << endl;
      continue;
    }

    return pay_rate;
  }
}

int main() {
  int emp_id[] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
    7580489};
  const int length = sizeof(emp_id) / sizeof(emp_id[0]);

  int hours[length];
  int pay_rate[length];
  int wages[length];

  for (int i = 0; i < length; i++) {
    hours[i] = get_hours(emp_id[i]);
    pay_rate[i] = get_pay_rate(emp_id[i]);
    wages[i] = hours[i] * pay_rate[i];
  }

  for (int i = 0; i < length; i++) {
    cout << "Employee " << emp_id[i] << ": $" << wages[i] << endl;
  }

  return 0;
}
