// Mohamad Yazdi
// bubbleSort
//////////////////////////////////////////////////////////
/* Normal Version Algorithm
    start
        for i <- 1 to indexOfLastUnsortedElement-1
            if leftElement > rightElement
              swap leftElement and rightElement
    end
*/

/* Optimized Version Algorithm
    start
        swapped <- false
        for i <- 1 to indexOfLastUnsortedElement-1
            if leftElement > rightElement
                swap leftElement and rightElement
                swapped <- true
end
*/
//////////////////////////////////////////////////////////
#include <iostream>
using namespace std;
// Normal BubbleSort section
void bubbleSort(int array[], int size)
{
    for (int step = 0; step < size - 1; step++)
    {
        for (int i = 0; i < size - step; i++)
        {
            if (array[i] > array[i + 1])
            {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}

// Optimized BubbleSort section
void OPbubbleSort(int array[], int size)
{
    bool swapped = true;
    for (int step = 0; step < size - 1 && swapped; step++)
    {
        swapped = false;
        for (int i = 0; i < size - step; i++)
        {
            if (array[i] > array[i + 1])
            {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swapped = true;
            }
        }
    }
}
// print section
void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
        cout << "\t" << array[i];
    cout << endl;
}

int main()
{
    int data[]={3,4,1,14,12,15,0,2,1,-3};
    cout << "Sorted list: (bbsort) \n";
    OPbubbleSort(data,10);
    //bubbleSort(data,10);
    printArray(data, 10);
    return 0;
}
