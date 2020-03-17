#include <iostream>
using namespace std;
void get_score (float &percentage) {
cout << "Enter a test score (0-100): ";
cin >> percentage;
while (percentage > 100 || percentage < 0) {
cout << "Please enter a valid score (no negative number or numbers larger than 100)." << endl;
cin >> percentage; 
}   
}
float find_lowest (int Scores[]) {
  float Lowest = 300;
for (int i =0; i < 5; i++) {
if (Lowest > Scores[i]) {
Lowest = Scores[i];  
}
}
return Lowest; 
}
float calc_average (float Lowest, int Scores[]) {
float sum = 0;
float average = 0;
for (int i=0; i < 5; i++) {
sum = sum + Scores[i];
}  
float RealSum = sum - Lowest;
average = RealSum / 4;
return average;
}

int main() {
float Scores[5];  
float Score_Entered;
for (int i =0; i < 5; i++) {
  get_score (Score_Entered);
  Scores[i] =Score_Entered;
}
float Solution = calc_average(find_lowest(Scores[]), int Scores[]); //I got stuck here and I couldn't fix it, when you give me the score can you explain to me what I was supposed to do? Thanks!
cout << "The average for the scores is (without the lowest): " << Solution << endl;
  return 0;
}
