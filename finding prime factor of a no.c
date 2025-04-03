#include <stdio.h>
int main()

{
    int number,i,j;
    int count =0;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    printf("\nFactors of %d are: ", number);
    
    for ( i = 1; i <= number; i++)
    {
    	int z = number%i ;
        if (z == 0)
        {
        	for (j=1;j<=i;j++)
        	{
        		int g = i%j ;
        		if (g == 0)
        		{
        			count ++ ;
				}
			}
			/*if (count == 2)
			{    
				printf ("It is prime factor");
			} 
			else {
				printf ("It is not prime factor");
			}*/
           
        
		}
     
   }
    return 0;
}
