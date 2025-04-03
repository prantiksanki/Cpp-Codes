#include<stdio.h>
#define Area(x) (3.14*x*x)
int main ()
{
	float r1 = 6.25,r2=2.5 ,a ;
	a= Area (r1);
	
	printf ("Area of circle is : %f",a);
	a=Area(r2) ;
	printf ("\nThe area of circle is : %f",a);
	
}
