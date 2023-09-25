# Sort

## 선택 정렬 (Selection Sort)
선택 정렬은 배열에서 가장 작은 원소를 찾아 맨 앞으로 이동시키는 과정을 반복하여 전체 배열을 정렬하는 알고리즘입니다.

선택 정렬은 정렬해야 할 목록을 두 부분으로 나누어 생각합니다: 

정렬된 부분과 정렬되지 않은 부분입니다. 처음에는 정렬된 부분이 비어 있고, 정렬되지 않은 부분에는 모든 숫자가 있습니다.

1. **첫 번째 단계**: 정렬되지 않은 부분에서 가장 작은 숫자를 찾습니다.
  
2. **두 번째 단계**: 그 작은 숫자를 정렬되지 않은 부분의 맨 앞 숫자와 바꿉니다. 이렇게 하면 가장 작은 숫자가 정렬된 부분으로 이동하게 됩니다.

3. **세 번째 단계**: 다시 정렬되지 않은 부분에서 가장 작은 숫자를 찾아서, 그 부분의 맨 앞 숫자와 바꿉니다.

4. **네 번째 단계**: 이 과정을 계속 반복합니다. 정렬되지 않은 부분이 없을 때까지 계속 가장 작은 숫자를 찾아서 맨 앞에 놓습니다.

예를 들어, `[3, 1, 4, 1, 5, 9, 2, 6, 5]`라는 배열을 정렬한다고 가정해봅시다.

1. 첫 번째 단계에서 가장 작은 숫자는 1입니다. 이 숫자를 맨 앞의 숫자 3과 바꿉니다.
   - `[1, 3, 4, 1, 5, 9, 2, 6, 5]`

2. 다음 단계에서 정렬되지 않은 부분 `[3, 4, 1, 5, 9, 2, 6, 5]`에서 가장 작은 숫자는 1입니다. 이 숫자를 맨 앞의 숫자 3과 바꿉니다.
   - `[1, 1, 4, 3, 5, 9, 2, 6, 5]`

3. 이 과정을 반복하면, 결국 전체 배열이 정렬됩니다.
   - `[1, 1, 2, 3, 4, 5, 5, 6, 9]`

이렇게 하면 배열이 작은 숫자부터 큰 숫자까지 정렬이 완료됩니다.

### C++ 코드 예제

```cpp
void Swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
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
```

## 버블 정렬 (Bubble Sort)
버블 정렬은 배열을 정렬하는 가장 기본적인 알고리즘 중 하나입니다. 이 알고리즘은 인접한 두 원소를 비교하여 조건에 맞지 않으면 서로 위치를 바꾸는 작업을 반복합니다. 

[Bubble sort - Wikipedia](https://en.wikipedia.org/wiki/Bubble_sort)

### 작동 방식
1. 배열의 처음부터 끝까지 이동하면서 인접한 원소를 비교합니다.
2. 만약 인접한 두 원소가 정렬되어 있지 않다면(즉, 뒤의 원소가 앞의 원소보다 작다면), 두 원소의 위치를 서로 바꿉니다.
3. 이 과정을 배열의 끝까지 반복합니다.
4. 이러한 반복이 한 번 끝나면 배열의 가장 큰 원소가 배열의 끝으로 이동하게 됩니다.
5. 배열의 크기를 하나 줄인 다음 1~3 단계를 반복합니다.

### 시간 복잡도
버블 정렬은 코드가 간단하고 이해하기 쉽지만, 대용량 데이터에는 비효율적입니다. 다른 고급 정렬 알고리즘과 비교할 때 매우 느린 편입니다.

- 최악의 경우: \(O(n^2)\)
- 최선의 경우: \(O(n)\) (이미 정렬된 배열)
- 평균 경우: \(O(n^2)\)

### C++ 코드 예제

```cpp
#include <iostream>

void BubbleSort(int *arr, int size) {
  for (int i = 0; i < size - 1; ++i) {
    for (int j = 0; j < size - i - 1; ++j) {
      if (arr[j] > arr[j + 1]) {
        // Swap(arr[j], arr[j + 1])
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main() {
  int arr[] = {64, 34, 25, 12, 22, 11, 90};
  int size = sizeof(arr) / sizeof(arr[0]);
  
  BubbleSort(arr, size);
  
  // Print sorted array
  for (int i = 0; i < size; ++i) {
    std::cout << arr[i] << ' ';
  }
  std::cout << std::endl;
  
  return 0;
}
```
