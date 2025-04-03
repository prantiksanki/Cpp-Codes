#include <stdio.h>
int main ()
{
	int k ;
	k= 1 ;
	display (k);
}

void display (int n) 
{
	if (n<=10)
	{
		printf ("%d\t",n);
		display (n+1);
	}
}
