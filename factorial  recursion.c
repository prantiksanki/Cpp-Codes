#include <stdio.h>
int fact(int);
int main ()
{
	int n ;
	printf ("Enter a no : ");
	scanf ("%d",&n);
	
	int h = fact(n);
	printf ("The factorial of this no is : %d",h);
}
int fact (int a)
{
	if (a==0)
	{
		return 1 ;
	}
	else if (a==1)
	{
		return 1 ;
	}
	else 
	{
		return a* fact(a-1);
	}
}
