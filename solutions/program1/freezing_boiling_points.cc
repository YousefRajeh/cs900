#include <iostream>
using namespace std;

int main() {
  float temperature = 0.0f;
  cout << "Enter a temperature: ";
  cin >> temperature;

  if (temperature <= -173) {
    cout << "Ethyl alcohol will freeze" << endl;
  }

  if (temperature >= 172) {
    cout << "Ethyl alcohol will boil" << endl;
  }

  if (temperature <= -38) {
    cout << "Mercury will freeze" << endl;
  }

  if (temperature >= 676) {
    cout << "Mercury will boil" << endl;
  }

  if (temperature <= -362) {
    cout << "Oxygen will freeze" << endl;
  }

  if (temperature >= -306) {
    cout << "Oxygen will boil" << endl;
  }

  if (temperature <= 32) {
    cout << "Water will freeze" << endl;
  }

  if (temperature >= 212) {
    cout << "Water will boil" << endl;
  }

  return 0;
}
