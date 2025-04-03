#include <stdio.h>

int main() {
    volatile int counter = 0;

    while (counter < 10)
	 {
 
        counter++;

         printf("Counter: %d\n", counter);
    }

    return 0;
}

