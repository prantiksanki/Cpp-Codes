#include<stdio.h>
int sum (int );
int main ()
{
	int result = sum(10);
	printf ("%d",result);
} 
int sum (int x)
{
	if (x>0)
	{
	  return x+sum(x-1);
	} else 
	{
		return 0;
	}
}
