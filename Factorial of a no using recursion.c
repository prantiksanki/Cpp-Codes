#include<stdio.h>
int main ()
{
	int n ;
	printf ("Enter the no: ");
	scanf ("%d",&n);
	int h = fact (n);
	printf ("Factorial = %d",h);
} 
int fact (int n)
{
	if (n==0)
	{
		return 0 ;
	} 
	else if (n==1)
	{
		return 1;
	} 
	else
	{
		return n * fact (n-1);
	 } 
}
