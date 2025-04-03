#include <stdio.h>
int main ()
{
	int n;
	float sum = 0.0;
	printf ("Enter the range : ");
	scanf ("%d",&n);
	int i;
	for (i=1 ; i<=n ; i++)
	{
	   float rem = 1.0/i ;
	    sum = sum + rem ;
	}
	printf ("The sum of this series is : %f",sum);
	return 0;
}
