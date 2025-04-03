#include <stdio.h>

int main() {
    int arr[10];
    printf("Enter the elements of the array: ");
    int i;

    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nThe unique elements are: ");

    for (i = 0; i < 10; i++) {
        int isUnique = 1;  // Assume the element is unique

        for (int j = 0; j < 10; j++) {
            if (i != j && arr[i] == arr[j]) {
                // If there is any other occurrence of the same element, it's not unique
                isUnique = 0;
                break;
            }
        }

        if (isUnique) {
            printf("%d\t", arr[i]);
        }
    }

    return 0;
}

