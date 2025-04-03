#include<stdio.h>
int main ()
{
	int i ;
	int sum=0;
	i=1;
	while (i<=10)
	{
		printf ("%d",i);
		sum =sum+i;
		i++;
	}
	printf("\nsum=%d",sum);
	return 0;
}
