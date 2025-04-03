#include <stdio.h>
int main()
{
    int number,i;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    printf("\nFactors of %d are: ", number);
    
    for ( i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            printf("\n%d ", i);
        }
    }
     
    return 0;
}

