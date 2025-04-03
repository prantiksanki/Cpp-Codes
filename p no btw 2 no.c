#include <stdio.h>
int main ()
{
	int n1 , n2 ,rem ;
	int count = 0 ;
	printf ("Enter the range :    ");
	scanf ("%d %d",&n1 ,&n2);
	
	int i ,j ;
	for (i=n1 ; i<n2 ; i++)
	{
		for (j=2 ; j*j<i ; j++)
		{
			rem = i%j ;
		}
		if (rem != 0)
		{
			count ++ ;
		}
		
	}
	
	if (count == 2)
	{
		printf ("The %d no is prime ",i);
	}
}
