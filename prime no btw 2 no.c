#include <stdio.h>

int main() {
    int n1, n2;
    int i,j ;
    printf("Enter the range: ");
    scanf("%d %d", &n1, &n2);

    for ( i = n1; i < n2; i++) {
        int is_prime = 1;  // Assume i is prime until proven otherwise

        if (i <= 1) {
            is_prime = 0;  // 0 and 1 are not prime
        } else {
            for ( j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    is_prime = 0;  // i is divisible by a number other than 1 and itself
                    break;
                }
            }
        }

        if (is_prime) {
            printf("The %d is prime\n", i);
        }
    }

    return 0;
}

