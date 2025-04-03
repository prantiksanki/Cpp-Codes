//	Find sum of all array elements using recursion.

#include <stdio.h>

int sum(int arr[], int n); 

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int h = sum(arr, 10);  
    printf("The sum of the array elements is: %d", h);
    return 0;
}

int sum(int arr[], int n)  
{
    if (n != 0)
    {
        return arr[n - 1] + sum(arr, n - 1);  
    }
}

