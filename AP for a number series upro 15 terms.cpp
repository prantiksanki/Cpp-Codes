#include<stdio.h>
int main ()
{
	int d,a,i,series;
	printf ("Enter the value of First Term : ");
	scanf ("%d",&a);
	printf ("Enter the Common Difference : ");
	scanf ("%d",&d);
	printf ("%d\t",a);
	for (i=1;i<15;i++)
	{
		series = a+(i*d);
		printf ("%d\t",series);
	} 
	return 0;
}
