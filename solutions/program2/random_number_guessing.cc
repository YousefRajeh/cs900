#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {
  srand(time(nullptr));
  int number = rand() % 1001; // 1001 to include 1,000 in possible return value
  int guesses = 0;

  cout << "A random number has been chosen." << endl;
  while (true) {
    int guess = 0;
    cout << "Make a guess: ";
    cin >> guess;

    if (guess == number) {
      cout << "You got the correct answer in " << guesses
        << " attempts!" << endl;
      break;
    }
    else if (guess < number) {
      cout << "Too low, try again." << endl;
    }
    else if (guess > number) {
      cout << "Too high, try again." << endl;
    }

    guesses++;
  }

  return 0;
}
