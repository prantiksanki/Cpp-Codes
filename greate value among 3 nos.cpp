#include <stdio.h>
int main ()
{
	int x,y,z;
	printf ("Enter the value of x: ");
	scanf ("%d",&x);
	printf ("Enter the value of y: ");
	scanf ("%d",&y);
	printf ("Enter the value of z: ");
	scanf ("%d",&z);
	if (x>y && x>z)
	{
		printf ("The biggest no is x.");
	} else if (y>x && y>z)
	{
		printf ("The biggest no is y.");
	} else if(z>x && z>y) 
	{
		printf ("The biggest no is z.");
	} else {
		printf ("Invalid Input.");
	}
	return 0;
}
