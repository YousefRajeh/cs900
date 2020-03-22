#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
  int Number = 0;
  int Guessed = 0;
  int Tries = 0;
  srand(time(0));
  Number = rand () % 1000 + 1;
  while (Guessed != Number) {
    cout << "Choose a random number from 1-1000." << endl;
    cin >> Guessed;
    Tries = Tries + 1;
    if (Guessed > Number) {
      cout << "The number you have chosen is too high." << endl; 
    }
    if (Guessed < Number) {
      cout << "The number you have chosen is too low." << endl;  
    }
    if (Guessed == Number) {
      cout << "You have guessed the number correctly. Number of tries: " << Tries << endl;  
    }
  }
  return 0;
}

// Score: 20 / 20
