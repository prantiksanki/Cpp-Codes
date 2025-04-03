#include <stdio.h>
int main ()
{
	int n ;
	printf ("Enter the no :  ");
	scanf ("%d",&n) ;
	
	int i ;
	
	for (i=1 ; i<= 10 ; i++)
	{
		printf ("\n %d * %d = %d ",n , i , n*i);
	}
	
}
