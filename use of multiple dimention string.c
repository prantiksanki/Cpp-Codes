#include <stdio.h>
#include <string.h>

int main() {
    char str[2][2][20];

    // Correcting the indices
    strcpy(str[0][0], "I am your bf");
    strcpy(str[0][1], "Sohan is also your bf");
    strcpy (str[1][0], "i love you snehanjita");
    strcpy (str[1][1], "Sneha , i am your crush");

    // Correcting the format specifiers and indices in printf
    printf("%s\n", str[0][0]);
    printf("%s\n", str[0][1]);
    printf ("%s\n",str[1][0]);
    printf ("%s\n",str[1][1]);
    return 0;
}

