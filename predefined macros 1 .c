#include <stdio.h>

int main() {
    #ifdef __STDC__
        printf("Compiler conforms to the C standard (STDC version %ld)\n", __STDC__);
    #else
        printf("Compiler does not conform to the C standard\n");
    #endif

    return 0;
}

