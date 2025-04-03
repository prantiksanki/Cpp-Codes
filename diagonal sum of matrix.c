#include <stdio.h>
int main ()
{
	int i ,j;
	int sum = 0 ;
	int arr[3][3];
	for (i=0 ; i<3 ; i++)
	{
		for (j=0 ; j<3 ; j++)
		{
			printf ("arr[%d][%d]:  ",i,j);
			scanf ("%d",&arr[i][j]);
		}
	}
	for (i=0 ; i<3 ; i++)
	{
		printf ("\n");
		for (j=0 ; j<3 ; j++)
		{
			printf ("%d\t",arr[i][j]);
			
		}
	}
	
	for (i=0 ; i<3 ; i++)
	{
		
		for (j=0 ; j<3 ; j++)
		{
			if (i==j)
			{
				sum = sum + arr[i][j];
			}
			
		}
	}
	printf ("The sum of diagonal elements of this matrix is %d",sum);
	
	return 0 ;
}
