#include <stdio.h>
int power(int n1, int n2);
int main() 
{
    int b, a, r;
    printf("Enter the number: ");
    scanf("%d", &b);
    printf("Enter power number: ");
    scanf("%d", &a);
    r = power(b, a);
    printf("The result of the math is : %d",r);
    return 0;
}

int power(int b, int a) 
{
    if (a != 0)
	{
	
        return (b * power(b, a - 1));
    }
    else{
	
        return 1;
    }
}

