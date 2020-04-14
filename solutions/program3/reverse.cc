#include "program3/reverse.h"

int* reverse(int array[], int size) {
  int* copy = new int[size];
  for (int i = 0; i < size; i++) {
    copy[size - i - 1] = array[i];
  }

  return copy;
}
