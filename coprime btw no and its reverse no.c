#include <stdio.h>
int gcd(int a, int b)
 {
    while (b != 0)
	 {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
void coprime(int num)
 {
    int original = num;
    int reversed = 0;
    int temp = num;
    while (temp != 0) 
	{
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp /= 10;
    }
    int gcdResult = gcd(original, reversed);
    if (gcdResult == 1) {
        printf("The original number and its reverse are coprime.\n");
    } else {
        printf("The original number and its reverse are not coprime.\n");
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    coprime(num);

    return 0;
}

