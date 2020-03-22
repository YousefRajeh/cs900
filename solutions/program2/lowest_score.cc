#include <iostream>
using namespace std;

void get_score(float& score) {
  while (true) {
    float input = 0.0f;

    cout << "Enter the test score: ";
    cin >> input;

    if (input > 0 && input < 100) {
      score = input;
      break;
    }

    cout << "Scores must be between 0 and 100" << endl;
  }
}

float find_lowest(float scores[], int length) {
  // assume the first is the lowest just to get started
  float lowest = scores[0];

  for (int i = 0; i < length; i++) {
    if (scores[i] < lowest) {
      lowest = scores[i];
    }
  }

  return lowest;
}

float calc_average(float scores[], int length) {
  float lowest = find_lowest(scores, length);
  float sum = 0.0f;

  for (int i = 0; i < length; i++) {
    if (scores[i] != lowest) {
      sum += scores[i];
    }
  }

  return sum / (length - 1);
}

int main() {
  float scores[] = {0, 0, 0, 0, 0};
  const int length = sizeof(scores) / sizeof(scores[0]);

  for (int i = 0; i < length; i++) {
    get_score(scores[i]);
  }

  float average = calc_average(scores, length);
  cout << "The average score is " << average << endl;

  return 0;
}
