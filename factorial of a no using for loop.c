#include <stdio.h>
int main ()
{
	int i , n ;
	int prod = 1 ;
	printf ("Enter the no : ");
	scanf ("%d",&n);
	
	for (i=n ; i>0 ; i--)
	{
		prod = prod * i ;
	}
	printf ("The factorial of the no %d is %d",n ,prod);
	return 0 ;
}
