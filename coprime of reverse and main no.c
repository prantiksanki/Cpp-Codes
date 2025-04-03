#include <stdio.h>
int main() 
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    int rev= 0;
    int temp = num;


    while (temp != 0)
	 {
        rev= rev * 10 + temp % 10;
        temp = temp/10;
    }

    int cd = gcd(num, rev);

    if (cd == 1) {
        printf("The number and its reverse are coprime.\n");
    } else {
        printf("The number and its reverse are not coprime.\n");
    }

    return 0;
}
int gcd(int a, int b)
 {
    if (b == 0)
    return a ;
    return gcd(b, a % b);
}

