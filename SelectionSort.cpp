// Mohamad Yazdi
// Selection Sort
//////////////////////////////////////////////////////////
/* Algorithm
    start
        selectionSort(array, size)
            repeat (size - 1) times
            set the first unsorted element as the minimum
            for each of the unsorted elements
                if element < currentMinimum
                    set element as new minimum
        swap minimum with first unsorted position
    end
*/
//////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

// function to swap the the position of two elements
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
void selectionSort(int array[], int size) {
  for (int step = 0; step < size - 1; step++) {
    int min_idx = step;
    for (int i = step + 1; i < size; i++) {
      if (array[i] < array[min_idx])
        min_idx = i;
    }
    swap(&array[min_idx], &array[step]);
  }
}
//print Section
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

int main() {
  int data[] = {20, 12, 10, 15, 2};
  selectionSort(data, 5);
  cout << "Sorted array\n";
  printArray(data, 5);
}