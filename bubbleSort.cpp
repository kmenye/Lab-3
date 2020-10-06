
// C++ Bubble sort  
#include <iostream>
using namespace std; 
  
void swap(int *x, int *y)  
{  
    int temp = *x;  
    *x = *y;  
    *y = temp;  
}  
  
//bubble sort function 
void bubbleSort(int arr[], int n)  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)      

        for (j = 0; j < n-i-1; j++)  
            if (arr[j] > arr[j+1])  
                swap(&arr[j], &arr[j+1]);  
}  

int main()  
{  
    int arraySize = 7;
    int arr[arraySize] = {32, 17, 13, 8, 11, 6, 42};  //static array for demonstration purposes
    bubbleSort(arr, arraySize);  
    cout<<"Sorted array: \n";

    for (int i = 0; i < arraySize; i++)
    {
        cout << arr[i] << " ";
    }
    

    return 0;  
}