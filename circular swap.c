#include <stdio.h>
int main ()
{
	int a , b , c; 
	a = 5 ;
	b = 8 ;
	c = 10 ;
	printf ("\nBefore circular swap of 3 variables : ");
	printf ("\na = %d , b =%d , c=%d",a , b , c);
	
	int temp ;
	temp = a ;
	a = c ;
	c = b ;
	b = temp ;
	
	printf ("\nAfter circular swap of 3 variables : ");
	printf ("\na=%d , b=%d , c= %d",a , b , c);
}
