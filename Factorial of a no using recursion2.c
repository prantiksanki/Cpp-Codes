
//Factorial using function and recursion 



#include <stdio.h>
int main ()
{
	int n;
	printf ("Enter a no : ");
	scanf ("%d",&n);
	int h = fact (n);
	printf ("the factorial of this no is : %d",h);
	return 0;
} 
int fact (int n)
{
	if (n==0)
	{
		return 0;
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
