#include <stdio.h>

int main() {
    int num1, num2;

     printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int originalNum1 = num1, originalNum2 = num2;

     while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }

     int lcm = (originalNum1 * originalNum2) / num1;

     printf("The LCM of %d and %d is %d\n", originalNum1, originalNum2, lcm);

    return 0;
}

