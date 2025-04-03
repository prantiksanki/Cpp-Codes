#include<stdio.h>
int main ()
{
	int i=10 ; 
	int j=20;
	printf ("%d %d %d\n",i,j);     //last value is garbage value
	printf ("%d\n", i,j);                // only value of i is considered
	return 0;
}
