#include <stdio.h>

int main() {
    char signedChar = -10;
    unsigned char unsignedChar = 246;

    printf("Signed char value: %d\n", signedChar);
    printf("Unsigned char value: %u\n", unsignedChar);

    printf("Incrementing signed char by 1: %d\n", signedChar + 1);
    printf("Incrementing unsigned char by 1: %u\n", unsignedChar + 1);

    return 0;
}

