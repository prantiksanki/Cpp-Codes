#include <stdio.h> 
int sum (int x)
{
	int k = 1 ;
	if (k<=1)
	{
		return 1 ;
	}
	
	k = x+sum(x-1) ;
	return k ;
 }

int main ()
{
	 printf ("%d" , sum(4));
	 
}
