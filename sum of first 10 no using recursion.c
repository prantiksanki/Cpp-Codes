#include<stdio.h>
int sum (int );
int main ()
{
	sum(10);
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
