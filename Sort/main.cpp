#include <iostream>

#include "SortUtils.h"

using namespace std;

int main() {
  const int testCount = 3;

  for (int k = 0; k < testCount; ++k) {
    for (int j = 0; j < testCount; ++j) {
      for (int i = 0; i < testCount; ++i) {
        int arr[3] = {i, j, k};
        int size = sizeof(arr) / sizeof(arr[0]);

        for (int e = 0; e < size; ++e) {
          cout << arr[e] << " " << flush;
        }

        cout << " -> " << flush;

        BubbleSort(arr, size);

        for (int e = 0; e < size; ++e) {
          cout << arr[e] << " " << flush;
        }
        cout << boolalpha << CheckSorted(arr, size) << endl;
      }
    }
  }

  return 0;
}
