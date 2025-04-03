#include <stdio.h>
#include <math.h>
int main ()
{
	int n ;
	printf ("Enter a Binary No : ");
	scanf ("%d",&n);
	int dig ;
	printf ("Enter the no of digit in this Binary no :  ");
	scanf ("%d",&dig) ;
	
	int rem , sum = 0  ;
	int i ;
	for (i=0 ; i<dig ; i++)
	{
		rem = n%10 ;
		sum = sum  + rem * pow (2 , i);
		n = n/10 ;
		
	}
	
	printf ("The No in Decimal form is : %d",sum);
	return 0 ;
}
