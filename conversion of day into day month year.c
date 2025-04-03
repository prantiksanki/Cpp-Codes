#include <stdio.h>
int main ()
{
	int n , p , d , m , y ;
	
	printf ("Enter the no of days : ");
	scanf ("%d",&n);
	
	y=n/365 ;
	printf ("\nYear : %d ",y);
	
	p = n%365 ;
	
	m=p/30 ;
	printf ("\nMonth : %d",m) ;
	
	d = p%30 ;
	
	printf ("\nDays : %d" ,d);
}
