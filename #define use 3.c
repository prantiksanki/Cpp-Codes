#include<stdio.h>
#define SLOGAN printf("You are a chutiya") 
int main ()
{
	int a  ;
	printf ("Enter a no :  ");
	scanf ("%d",&a);
	
	if (a>10 && a<100)
	{
		SLOGAN ;
		
	}
	
	else 
	{
		printf ("The no is not between 10 and 100");
	}
	
	
}
