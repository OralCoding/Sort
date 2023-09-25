#include <iostream>

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

void BubbleSort(int *arr, int size) {
  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        Swap(arr[j], arr[j + 1]);
      }
    }
  }
}

void InsertionSort(int *arr, int size) {
  for (int i = 1; i < size; i++) {
    int key = arr[i];
    int j = i - 1;

    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j--;
    }

    arr[j + 1] = key;
  }
}
