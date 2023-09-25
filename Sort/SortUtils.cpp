#include "SortUtils.h"

void Swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

bool CheckSorted(const int *arr, int size) {
  for (int i = 0; i < size - 1; i++) {
    if (arr[i] > arr[i + 1]) {
      return false;
    }
  }
  return true;
}

void SelectionSort(int *arr, int size) {
  for (int i = 0; i < size - 1; i++) {
    int minIdx = i;
    for (int j = i + 1; j < size; j++) {
      if (arr[j] < arr[minIdx]) {
        minIdx = j;
      }
    }
    if (i != minIdx) {
      Swap(arr[i], arr[minIdx]);
    }
  }
}
