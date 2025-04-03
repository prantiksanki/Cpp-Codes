#include <stdio.h>

int main() 
{
    FILE *file;
    int num1, num2;

    // Open a file for reading
    file = fopen("address.txt", "r");

    // Check if the file opened successfully
 

    // Read two integers from the file
    fscanf(file, "%d %d", &num1, &num2);

    // Close the file
    fclose(file);

    // Display the read values
    printf("Read values: %d, %d\n", num1, num2);

    return 0;
}

