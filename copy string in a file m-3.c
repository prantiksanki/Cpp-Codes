#include <stdio.h>

int main() {
    FILE *file = fopen("output_method3.txt", "wb");
    if (file == NULL) {
        printf("Error opening file for Method 3.\n");
        return 1;
    }

    char inputString[100];
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Writing to file using fwrite
    fwrite(inputString, sizeof(char), sizeof(inputString), file);

    fclose(file);

    printf("String written to file using Method 3 successfully.\n");

    return 0;
}

