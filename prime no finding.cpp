#include <stdio.h>
int main()
{
    int number,i;
    int count =0;
    printf("\nEnter a number: ");
    scanf("%d", &number);
    
    for ( i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
        	count ++ ;
		} 
		     
    } 
    if (count == 2)
    {
    	printf ("Prime no");
	} 
	else {
		printf ("Not prime no");
	}
          
    return 0;
}
