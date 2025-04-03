#include <stdio.h>
int main ()
{
	int n ,i , h, j;
	printf ("Enter the  range : ");
	scanf ("%d",&n);
	int count = 0 ;
	printf ("Prime nos btw 1 and %d : ",n);
	for (i=1 ; i<= n ; i++)
	{
		for (j =i ; j<n ; j ++)
		{
		      h = i%j ;
		      if (h!=0)
		      {
		      	count ++ ;
			  } 
		}
		if (count == 2)
		{
		
		printf ("%d",h);
	}
	}
}
