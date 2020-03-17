#include <iostream>
using namespace std;

int main() {
double Number = 0;
double Greatest = -2147483647; 
double Lowest = 2147483647;
cout << "Enter a number to  find the greatest and lowest of the set or enter -99 to stop." << endl;
cin >> Number;
while (Number != -99) {
if (Number >= Greatest) {
Greatest = Number;
}
if (Number <= Lowest) {
Lowest = Number;  
}
cout << "Enter another number to add to the set or enter -99 to stop." << endl;
cin >> Number;
}
cout << "The lowest number is: " << Lowest << ". The Greatest number is: " << Greatest << "." << endl;
  return 0;
}