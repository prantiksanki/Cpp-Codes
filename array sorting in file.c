#include <stdio.h>

int main() {
     int n = 10;  
    FILE *file;
    file = fopen("numbers.txt", "w");
    int i , j ;
     

     for ( i = 1; i <= n; i++) {
        fprintf(file, "%d ", i);  
    }

    fclose(file);

     file = fopen("numbers.txt", "r");

    int numbers_array[n];
    for ( i = 0; i < n; i++) {
        fscanf(file, "%d", &numbers_array[i]);
    }

    fclose(file);

    printf("Original array: ");
    for ( i = 0; i < n; i++) {
        printf("%d ", numbers_array[i]);
    }
    printf("\n");

     int temp;
    for ( i = 0; i < n-1; i++) {
        for ( j = 0; j < n-i-1; j++) {
            if (numbers_array[j] > numbers_array[j+1]) {
                 temp = numbers_array[j];
                numbers_array[j] = numbers_array[j+1];
                numbers_array[j+1] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for ( i = 0; i < n; i++) {
        printf("%d ", numbers_array[i]);
    }
    printf("\n");

    return 0;
}

