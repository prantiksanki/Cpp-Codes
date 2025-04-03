#include <stdio.h>
int main ()
{
	int a1 , a2,a3 ;
	int i ;
	a1 = 0 ; 
	a2 = 1 ;
	printf ("%d \t",a1);
	printf ("%d \t",a2);
	for (i=1 ; i<=10 ; i++)
	{
		a1 = a2 ;
		a2 = a3 ;
		a3 = a1+a2;
		printf ("%d \t",a3);
	}
	return 0 ;
}
