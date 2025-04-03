#include<stdio.h>
int main ()
{
	int x,y,c;
	printf ("Enter the value of x : ");
	scanf ("%d",&x);
	printf ("Enter the value of y : ");
	scanf ("%d",&y);
	c=x;
	x=y;
	y=c;
	printf ("\nAfter swapping x=%d",x);
	printf ("\nAfter swapping y=%d",y);
	return 0;
}
