#include <stdio.h>
#include <math.h>

int main() 
{
    int n, i, j, rem, count, sum;

    printf("Enter the range: ");
    scanf("%d", &n);
    printf("The Armstrong numbers between 1 and %d are: ", n);

    for (i = 1; i <= n; i++) 
	{
        j = i;
        sum = 0;
        count = 0;
        while (j != 0)
		 {
            rem = j % 10;
            count++;
            j /= 10;
        }
        j = i;
        while (j != 0)
		 {
            rem = j % 10;
            sum += pow(rem, count);
            j /= 10;
        }
        if (sum == i) 
		{
            printf("%d ", i);
        }
    }
    
    printf("\n");

    return 0;
}

