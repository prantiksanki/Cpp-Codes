#include <stdio.h>
int main() 
{
    int n, i, j, h;
    printf("Enter the range: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d: ", n);
    for (i = 2; i <= n; i++) 
	{  
        int count = 0;  
        for (j = 2; j <= i - 1; j++)
		 {
            h = i % j;
            if (h == 0) 
			{
                count++;
            }
        }
        if (count == 0) 
		{  
            printf("%d ", i);
        }
    }

    return 0;
}

