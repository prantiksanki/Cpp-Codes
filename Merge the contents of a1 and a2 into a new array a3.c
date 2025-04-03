//	Merge the contents of 'a1' and 'a2' into a new array 'a3'.

#include <stdio.h>

int main() 
{
    int i;
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    int arr3[10]; 

    int sizeof_arr1 = 5; 
    int sizeof_arr2 = 5; 
    int sizeof_arr3 = sizeof_arr1 + sizeof_arr2;

    for (i = 0; i < sizeof_arr1; i++) {
        arr3[i] = arr1[i];
    }

    for (i = 0; i < sizeof_arr2; i++) {
        arr3[sizeof_arr1 + i] = arr2[i];
    }

    for (i = 0; i < sizeof_arr3; i++) {
        printf("%d ", arr3[i]);
    }
    
    return 0;
}

