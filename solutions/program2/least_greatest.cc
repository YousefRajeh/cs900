#include <climits>
#include <iostream>
using namespace std;

int main() {
  int largest = INT_MIN;
  int smallest = INT_MAX;

  while (true) {
    int input = 0;
    cout << "Enter an integer: ";
    cin >> input;

    if (input == -99) {
      break;
    }

    if (input > largest) {
      largest = input;
    }

    if (input < smallest) {
      smallest = input;
    }
  }

  cout << "The largest number was " << largest << endl;
  cout << "The smallest number was " << smallest << endl;

  return 0;
}
