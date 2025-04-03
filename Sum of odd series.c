#include<stdio.h>
int main ()
{
	int n ;
	printf ("Enter the no to which you want to find the sum of odd no  : ");
	scanf ("%d",&n);
	int sum = 0;
	int i ;
	printf ("The series is :  ");
	for (i=2 ; i<=n ; i++)
	{
		if (i%2 != 0)
		{
			printf ("%d + ",i) ;
		    sum= sum + i ;
		}
	}
	
	printf ("\nThe sum of the odd series is : %d ",sum+1);
}
