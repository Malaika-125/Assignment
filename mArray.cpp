#include <iostream>
#include "mArray.h"
using namespace std;
int main()
{
    int size, ele;
    cout << "Enter the number of elements in your array: ";
    cin >> size;
    int  array[size];
    cout<<"Input the elements: ";
    cout<<arr::inputarray(array, size);

    cout<<"Sorted array: ";
    cout<<arr::bubbleSort(array, size);

    cout<<"Search for element: ";
    cout<<arr::binarySearch(array, size, ele);
}