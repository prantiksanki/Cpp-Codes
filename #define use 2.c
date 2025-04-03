#include<stdio.h>
#define AND && 
int main ()
{
	int a  ;
	printf ("Enter a no :  ");
	scanf ("%d",&a);
	
	if (a>10 AND a<100)
	{
		printf ("The no is between 10 and 100  :  ") ;
		
	}
	
	else 
	{
		printf ("The no is not between 10 and 100");
	}
	
	
}
