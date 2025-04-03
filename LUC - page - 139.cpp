#include <stdio.h>
int square (int);
int main ()

{
	float a,b;
	printf ("Enter any number: ");
	scanf ("%f",&a);
	b= square(a);
	printf ("Square of %f is %f\n",a,b);
	return 0;
} 
int square (int x)
{
	float y;
	y= x*x ;
	return y;
}
