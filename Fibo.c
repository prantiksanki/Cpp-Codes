#include <stdio.h>
int main ()
{
	int a,b,c  ;
	a=0 ;
	b= 1 ;
	
	int i ;
	
	int n ;
	
	printf ("Enter the no of terms :  ");
	scanf ("%d",&n) ;
	
	printf ("%d\t%d\t ",a , b );
	
	for (i=2 ; i<n  ;i++)
	{
		c = a + b ;
		
		printf ("%d\t",c) ;
		a=b ; 
		b= c ;
		
	}
	
}
