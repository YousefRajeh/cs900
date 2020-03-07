#include <iostream>
using namespace std;

int main() {
  char package = '\0';
  cout << "Enter your package (A, B, C): ";
  cin >> package;

  if (package != 'A' && package != 'B' && package != 'C') {
    cout << "Please enter a valid package (A, B, C)." << endl;
    return 1;
  }

  int minutes = 0;
  cout << "Enter the number of minutes used: ";
  cin >> minutes;

  const float base_price_a = 39.99;
  const float base_price_b = 59.99;
  const float base_price_c = 69.99;

  const float base_minutes_a = 450;
  const float base_minutes_b = 900;

  const float extra_rate_a = 0.45;
  const float extra_rate_b = 0.40;

  int extra_minutes_a = max(0.0f, minutes - base_minutes_a);
  int extra_minutes_b = max(0.0f, minutes - base_minutes_b);

  float total_due_a = base_price_a + extra_minutes_a * extra_rate_a;
  float total_due_b = base_price_b + extra_minutes_b * extra_rate_b;
  float total_due_c = base_price_c;

  if (package == 'A') {
    cout << "Total bill: $" << total_due_a << endl;

    bool savings = false;
    if (total_due_a > total_due_b) {
      savings = true;
      cout << "If you purchase plan B, your savings would be: $"
        << total_due_a - total_due_b << endl;
    }

    if (total_due_a > total_due_c) {
      savings = true;
      cout << "If you purchase plan C, your savings would be: $"
        << total_due_a - total_due_c << endl;
    }

    if (!savings) {
      cout << "You are on the best plan for your usage!" << endl;
    }
  }
  else if (package == 'B') {
    cout << "Total bill: $" << total_due_a << endl;

    bool savings = false;
    if (total_due_a > total_due_c) {
      savings = true;
      cout << "If you purchase plan C, your savings would be: $"
        << total_due_a - total_due_c << endl;
    }

    if (!savings) {
      cout << "You are on the best plan for your usage!" << endl;
    }
  }
  else if (package == 'C') {
    cout << "Total bill: $" << 69.99 << endl;
  }
  else {
    cout << "Please enter a valid package" << endl;
  }

  return 0;
}
