#include <stdio.h>

int main()
 {
    FILE *file = fopen("output_method1.txt", "w");
    if (file == NULL) {
        printf("Error opening file for Method 1.\n");
        return 1;
    }

    char inputString[100];
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Writing to file using fprintf
    fprintf(file, "%s", inputString);

    fclose(file);

    printf("String written to file using Method 1 successfully.\n");

    return 0;
}

