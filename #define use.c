#include <stdio.h>
#define ARANGE (a>25 && a<50)
int main ()
{
	int a ;
	printf ("Enter a no : ");
	scanf ("%d",&a);
	//ARANGE(n);
	if (ARANGE)
	{
		printf ("The no is between 25 and 50");
	}
	else 
	{
		printf ("The no is not between 25 and 50");
	}
	
	
}
