#include<stdio.h>
int main ()
{
	int i,j;
	for (i=3;i>0;i--)  //i=3
	{
		for (j=1;j<=i;j++)  
		{
			printf ("*");
		}
		printf ("\n");
	}
	return 0;
}
