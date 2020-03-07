#include <iostream>
using namespace std;

int main() {
  double T = 0;
  cout << "Enter the temperature: ";
  cin >> T;
  if (T >= 676) {
    cout << "Mercury, Water, Ethyl Alcohol, and Oxygen Boil." << endl;
  }
    if (T >= 212 && T < 676) {
      cout << "Water, Ethyl Alcohol, and Oxygen Boil." << endl;
    }
      if (T >= 172 && T < 212) {
        cout << "Ethyl Alcohol and Oxygen Boil." << endl;
      }
        if (T > -38 && T <= 32) {
        cout << "Oxygen Boils and Water Freezes." << endl;
        }
          if (T > -173 && T <= -38) {
          cout << "Oxygen Boils and both Water and Mercury Freeze." << endl;
          }
            if (T > -306 && T <= -173) {
            cout << "Oxygen Boils and Water, Mercury, and Ethyl Alcohol Freeze." << endl;
            }
              if (T > -362 && T <= -306) {
              cout << "Ethyl Alcohol, Mercury, and Water Freeze." << endl;
              }
                if (T <= -362) {
                cout << "Ethyl Alcohol, Mercury, Water, and Oxygen Freeze." << endl;
                 }
  return 0;
}

// Comments: this is overly complicated for what you need to do. Nested if statements are going to
// make your program harder to read and maintain. What happens if we add another element or
// substance to the mix? Consider how to do this in a clearer way (see solutions).
//
// Score: 18 / 20
