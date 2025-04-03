#include<stdio.h>
int main  ()
{
	int i ;
	int sum =0;
	for (i=1 ;i<=80 ; i++)
	{
		if (i%2 != 0)
		{
			sum = sum + i ;
		}
	}
	printf ("The sum of the 1st 40 odd no is : %d ",sum +1);
}
