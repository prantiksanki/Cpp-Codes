#include <stdio.h>
int main ()
{
	int a,b;
	int sum = 0;
	int prod = 0 ;
	printf ("\nEnter the initial value : ");
	scanf ("%d",&a);
	printf ("\nEnter the final value : ");
	scanf ("%d",&b);
	int i;
	for (i=a ; i<=b ; i++)
	{
		if (i%2 == 0)
		{
			sum = sum + i;
			
		} 
		else if (i%2 != 0)
		{
			prod = prod + i ;
			 
		}
	} 
	printf ("\nThe sum of even no : %d",sum);
	printf ("\nThe sum of odd no : %d",prod);
	return 0 ;
}
