#include <stdio.h>
int main ()
{
	int a , b ,c ;
	printf ("Enter the 1st no : ");                   //a=1 , b=4
	scanf ("%d",&a);
	printf ("Enter the 2nd no : ");
	scanf ("%d",&b);
	
	
	printf ("\nBefore swipe the nos are : a=%d , b=%d",a,b);
	
     c=a ;
     a=b ;
     b=c ;
	
	printf("\nAfter swipe the nos are : a=%d and b=%d",a,b);
}
