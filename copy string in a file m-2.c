#include <stdio.h>

int main() {
    FILE *file = fopen("output_method2.txt", "w");
    if (file == NULL) {
        printf("Error opening file for Method 2.\n");
        return 1;
    }

    char inputString[100];
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Writing to file using fputs
    fputs(inputString, file);

    fclose(file);

    printf("String written to file using Method 2 successfully.\n");

    return 0;
}

