// Mohamad Yazdi
// Insertion Sort
//////////////////////////////////////////////////////////
/* Algorithm
    start
        mark first element as sorted
        for each unsorted element X
         'extract' the element X
            for j <- lastSortedIndex down to 0
             if current element j > X
                move sorted element to the right by 1
    break loop and insert X here
    end
*/
//////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

void insertionSort(int array[], int size) {
  for (int step = 1; step < size; step++) {
    int key = array[step];
    int j = step - 1;
    
    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}
// Print Section
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}
int main() {
  int data[] = {9, 5, 1, 4, 3};
  insertionSort(data, 5);
  cout << "Sorted array:\n";
  printArray(data, 5);
}