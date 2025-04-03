#include <stdio.h>
#include <string.h>

int main() {
    char strings[3][20];

    // Assign values to the 2D array
    strcpy(strings[0], "Hello");
    strcpy(strings[1], "World");
    strcpy(strings[2], "CProgramming");

    // Access and print the strings
    printf("%s\n", strings[0]);
    printf("%s\n", strings[1]);
    printf("%s\n", strings[2]);

    return 0;
}

