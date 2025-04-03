 #include<stdio.h>

int main() {
    int n, rem;
    int originalN, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    // Store the original value of n
    originalN = n;

    while (n > 0) {
        rem = n % 10;
        sum = sum + (rem * rem * rem);
        n = n / 10;
    }

    if (sum == originalN) {
        printf("It is an Armstrong number.\n");
    } else {
        printf("It is not an Armstrong number.\n");
    }

    return 0;
}

