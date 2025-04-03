#include <stdio.h>
int main ()
{
	int n1,n2,n3,i;
	int sum = 0;
	n1 = 1;
	n2 = 1;
	printf ("The fibonacci series is : ");
	printf ("%d\t",n1);
	printf ("%d\t", n2);
	for (i=2;i<=20;i++)
	{
		n3=n1+n2 ;
		n1=n2;
		n2=n3;
		printf ("%d\t",n3);
	} 
	for (i=2;i<=20;i++)
	{
		sum = sum + n3 ;
	}
	printf ("\nThe sum of this series is : %d ",sum+2);
	return 0;
}
