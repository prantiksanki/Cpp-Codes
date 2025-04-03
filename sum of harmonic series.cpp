#include <stdio.h>
int main ()
{
	int i,n;
	printf ("Enter the range : ");
	scanf ("%d",&n);
	float sum = 0.0;
	for (i=1;i<=n;i++)
	{ 
	
	 float c=1.0/i;
     sum = sum +c;
     
	}
	printf ("\nThe sum of this series is : %f",sum);
	return 0;
}
