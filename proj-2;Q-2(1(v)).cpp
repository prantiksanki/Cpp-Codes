#include<stdio.h>
int main ()
{
	int r,area;
	printf ("Enter the value of radious : ");
	scanf ("%d",&r);
	int pi=3.14;
	area = 4*pi*r*r;
	printf ("The area of the sphere is = %d",area);
	return 0 ;
}
