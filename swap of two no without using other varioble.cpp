#include<stdio.h>
int main ()
{
	int x,y;
	printf ("Enter the value of x : ");
	scanf ("%d",&x);
	printf ("Enter the value of y : ");
	scanf ("%d",&y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf ("\ny=%d",y);
	printf ("\nx=%d",x);
	return 0;
}
