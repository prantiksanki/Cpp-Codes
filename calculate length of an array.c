#include <stdio.h>

int main() {
    int myArray[] = {1, 2, 3, 4, 5};
    
    // Calculate the length of the array
    int length = sizeof(myArray)/ sizeof(myArray[0]);

    printf("Length of the array: %d\n", length);

    return 0;
}

