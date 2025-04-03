#include <stdio.h>

int fiboseries(int n);

int main() {
    int i,n;
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    printf("The Fibonacci series is: ");
    for ( i = 0; i < n; i++) {
        printf("%d ", fiboseries(i));
    }

    return 0;
}

int fiboseries(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fiboseries(n - 1) + fiboseries(n - 2);
    }
}

