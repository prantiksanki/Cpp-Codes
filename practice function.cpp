#include <stdio.h>
int evenodd(int);
int main ()
{
	int num ,x;
	printf ("\nEnter the no : ");
	scanf ("%d",&num);
	x=evenodd(num);
	if (x%2==0)
	{
		printf ("\n %d is even");
	} else 
	{
		printf ("\n %d is odd");
	} 
	return 0;
} 
int evenodd(int a)
{
	if (a%2 == 0)
	return 1;
	else 
	return 0;
}
