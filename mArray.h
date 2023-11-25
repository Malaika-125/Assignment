
#include<iostream>
namespace arr{
    //input elements in array
    int inputarray(int a[], int n)
    {
        for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    }
    //bubble sort array
    int bubbleSort(int a[], int n)
    {
        for (int i = 0; i < n-1; i++) 
        {
            for (int j = 0; j < n-i-1; j++)
            {
                if (a[j] > a[j+1]) 
                {
                    int temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                }
            }
        }
                    
    }
    
    //binary search
    int binarySearch(int a[], int n, int x)
    {
        int i = 0, j = n - 1;
        while (i <= j) 
        {
            int m = (i + j) / 2;
           if (a[m] == x) 
                {
                    return m;
                } 
            else if (a[m] < x) 
            {
                i = m + 1;
            } 
            else 
            {
                j = m - 1;
            }
        }
    }
}