#include<stdio.h>
int main ()
{
	int i,j;
	printf ("Enter the value of j : ");
	scanf ("%d",&j);
	for (i=1;i<=j;i++)
	{
		printf ("\n%d",i);
		if (i%2==0){
			printf("\nThe no is even ");
		} else {
			printf ("\nThe no is odd.");
		}
	}
	return 0;
}
