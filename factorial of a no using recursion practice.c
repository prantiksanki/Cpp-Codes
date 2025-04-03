#include <stdio.h>
int main ()
{
	int n ;
    printf ("Enter the no : ");
    scanf ("%d",&n);
    int h = fact(n);
    printf ("The Factorial of this no is : ");
    
}
fact (int n)

{
	if (n==0)
	{
		return 1;
	} else if (n==1)
	{
		return 1;
	} 
	else 
	{
		return 1 * fact (n-1);
	}
}
