#include <stdio.h>

int main() {
    int i = 1;
    
    // Label
    start:
    
    printf("i = %d\n", i);
    
    i++;
    
    if (i <= 5) {
        goto start; // Jump back to the 'start' label
    }
    
    return 0;
}

