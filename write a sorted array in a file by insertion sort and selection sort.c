#include <stdio.h>
 

int main() {
    int n1, n2;
    int i , j ,k;
    printf("Enter the number of elements for array a1: ");
    scanf("%d", &n1);
    int a1[n1];
    printf("Enter the elements for array a1: ");
    for (i = 0; i < n1; i++) {
        scanf("%d", &a1[i]);
    }

    printf("Enter the number of elements for array a2: ");
    scanf("%d", &n2);
    int a2[n2];
    printf("Enter the elements for array a2: ");
    for ( i = 0; i < n2; i++) {
        scanf("%d", &a2[i]);
    }

    // Sorting arrays
    insertionSort(a1, n1);
    selectionSort(a2, n2);

    // Merging and sorting arrays
    int mergedArray[n1 + n2];
     i = j = k = 0;

    while (i < n1 && j < n2) {
        if (a1[i] < a2[j]) {
            mergedArray[k++] = a1[i++];
        } else {
            mergedArray[k++] = a2[j++];
        }
    }

    while (i < n1) {
        mergedArray[k++] = a1[i++];
    }

    while (j < n2) {
        mergedArray[k++] = a2[j++];
    }

    // Writing the merged and sorted array to a file
    FILE *outputFile;
    outputFile = fopen("sorted_output.txt", "w");

    if (outputFile == NULL) {
        printf("Error creating output file.\n");
        return 1;
    }

    for ( i = 0; i < n1 + n2; i++) {
        fprintf(outputFile, "%d\n", mergedArray[i]);
    }

    fclose(outputFile);

    printf("Sorted and merged array written to sorted_output.txt.\n");

    return 0;
}

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void selectionSort(int arr[], int n) {
    int i, j, minIndex, temp;
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}
