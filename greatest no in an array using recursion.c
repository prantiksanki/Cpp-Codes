#include <stdio.h>

int main()
 {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    int i ;

    printf("Enter the elements of the array:\n");
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = findLargest(arr, n);

    printf("The largest element in the array is: %d\n", largest);

    return 0;
}


int findLargest(int arr[], int n) 
{
    if (n == 1)
        return arr[0];
    

    int restMax = findLargest(arr + 1, n - 1);

    return (arr[0] > restMax) ? arr[0] : restMax;
}


