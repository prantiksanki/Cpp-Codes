#include <stdio.h>
int main ()
{
	int i;
	int n;
	int prod ;
	printf ("Enter the no : ");
	scanf ("%d",&n);
	printf ("\nThe table of %d is :  ",n);
	for (i=1 ; i<=10 ; i++)
	{
		prod = n * i ;
		printf ("\n %d * %d = %d", n , i , prod);
	} 
	return 0;
}
