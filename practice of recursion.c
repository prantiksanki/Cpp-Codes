#include <stdio.h>
int main ()
{
	int a;
	Printf ("Enter a no : ");
	scanf ("%d",&a);
	int h = var(a);
	printf ("The no is %d",h);
	return 0;
} 
var (int x)
{
	if (x>0)
	{
		return x * var (x-1);
	}
	else 
	{
		return 1;
	}

}
