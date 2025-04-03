#include <stdio.h>
int main()
{
    int i, j, num, isPrime;
    printf("Enter any number to print Prime factors: ");
    scanf("%d", &num);
    printf("All Prime Factors of %d are: \n", num);
    for(i=1; i<=num; i++)
    {
        
        if(num%i==0)
        {

            isPrime = 2;
            for(j=1; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    isPrime = 1;
                    break;
                }
            }
            if(isPrime==1)
            {
                printf("%d, ", i);
            }
        }
    }

    return 0;
}
