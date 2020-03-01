#include <iostream>
using namespace std;

int main() {
char Package;  
cout << "What is the Package you are using? (A, B, or C)" << endl;
cin >> Package;

if (Package == 'A'){
double Mins = 0;
cout << "How many Minutes do you use per month?";
cin >> Mins;
if (Mins < 450) {
  cout << "You pay $39.99";
}
if (Mins >= 450) {
double ExtraMinsA = Mins - 450;
double ExtraCostA = ExtraMinsA *0.45;
cout << "You pay $" << ExtraCostA + 39.99 << endl;
if (ExtraCostA + 39.99 > 59.99) {
double ExtraMinsB = Mins - 900;
double ExtraCostB = ExtraMinsB *0.4;
if (ExtraCostB > 0) {
double SavedB = (ExtraCostA +39.99) - (ExtraCostB +59.99);  
cout << "By using Package B you save: $" << SavedB << endl;
}
if (ExtraMinsB <= 0) {
double SavedB = (ExtraCostA + 39.99) - 59.99;
cout << "By using Package B you save: $" << SavedB << endl;
}
if (ExtraCostA + 39.99 > 69.99) {
double SavedC = (ExtraCostA + 39.99)  - 69.99;
cout << "By using Package C you save: $" << SavedC << endl;  
}
}
}
}
if (Package == 'B') {
double Mins = 0;
cout << "How many Minutes do you use per month?";
cin >> Mins;
if (Mins < 900)
cout << "You pay $59.99";
if (Mins >= 900) {
double ExtraMinsB = Mins - 900;
double ExtraCostB = ExtraMinsB * 0.4;
cout << "You pay $" << ExtraCostB + 59.99 << endl;
if (ExtraCostB + 59.99 > 69.99) {
double SavedC = (ExtraCostB + 59.99) - 69.99;
cout << "By using Package C you save: $" << SavedC << endl; 
}  
}
}
if (Package == 'C') {
  cout << "You have the best package! You pay $69.99" << endl;
}
  return 0;
}