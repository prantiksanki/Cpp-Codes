#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int n,i ;
	printf ("Enter the no of integers you want :  ");
	scanf ("%d",&n);
	int *ptr = (int*) calloc (n , sizeof (int ));
	int*p = ptr ;
	for (i =1 ; i<=n ; i++)
	{
		scanf ("%d",&(*ptr));
		ptr++ ;
		
	}
	
	for (i=1 ; i<=n ; i++)
	{
		printf ("%d\t",*p);
		p++;
	}
}
