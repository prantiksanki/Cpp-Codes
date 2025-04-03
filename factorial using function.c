#include<stdio.h>
int factorial (int);
int main ()
{
	int n,fact;
	printf ("\nEnter the no : ");
	scanf ("%d",&n);
	int h = factorial (n);
	printf ("\nThe factorial of %d is %d",n,h);
	return 0;
} 
int factorial ( int n)
{
	int i;
	int h = 1;
	for (i=n ; i>0 ; i--)
	{
		 h = h * i ;
	} 

	return h;
}
