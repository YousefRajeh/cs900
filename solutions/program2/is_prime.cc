#include <iostream>
using namespace std;

bool is_prime(int input) {
  for (int i = 2; i < input; i++) {
    if (input % i == 0) {
      return false;
    }
  }

  // checked all numbers less than input, none divided evenly
  return true;
}

int main() {
  int input = 0;
  cout << "Enter a number: ";
  cin >> input;

  if (is_prime(input)) {
    cout << input << " is prime!" << endl;
  }
  else {
    cout << input << " is not prime." << endl;
  }

  return 0;
}
