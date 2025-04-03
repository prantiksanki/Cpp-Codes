#include<stdio.h>
int main ()
{
	int p,n,i,r;
	float si;
	printf ("i= ");
	scanf("%d",&i);
	i=1;
	while (i<10)
	{
		printf("\nEnter the value of p,n,r : ");
		scanf("%d %d %d",&p,&n,&r);
		si=(p*n*r)/100;
		printf("\nThe simple interest is = %f",si);
		i=i+1;
	}
	return 0;
}
