#include<stdio.h>
int main ()
{
	int a,b,area;
	printf ("Enter the value of major axis : ");
	scanf ("%d",&a);
	printf ("Enter the value of minor axis: ");
	scanf("%d",&b);
	int pi=3.14;
	area = pi*a*b;
	printf ("The area of the sphere is = %d",area);
	return 0 ;
}
