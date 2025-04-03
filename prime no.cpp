#include<stdio.h>
int main ()
{
	int i,n;
	printf ("Enter the value of n : ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		printf ("%d\n",i);
		if (n%i==0&&n%n==0){
			printf ("\nThe no is prime.");
		} else if (n%i!=0){
			printf ("\nThe no is not prime.");
		} else {
			printf ("\nInvalid input");
		}
	} 
	return 0 ;
}
