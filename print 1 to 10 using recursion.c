#include <stdio.h>
int main ()
{
	int a=1;
	count (a);
	return 0;
} 
count (int x)
{
	if (x<=10)
	{
		printf ("%d\t",x);
		
	} 
	count (x+1);
}
