#include <stdio.h>
int main ()
{
	int i,j ;
	int arr1[3][3] , arr2[3][3] , arr3[3][3] ;
	
	printf ("Please enter the elements of 1st matrix : ");
	
	for (i=0 ; i<3 ; i++)
	{
		for (j=0 ; j<3 ; j++)
		{
			printf ("arr1[%d][%d] : ",i,j);
			scanf ("%d",&arr1[i][j]);
		}
	}
	
	
	printf ("Please enter the elements of 2nd matrix : ");
	
	for (i=0 ; i<3 ; i++)
	{
		for (j=0 ; j<3 ; j++)
		{
			printf ("arr2[%d][%d] : ",i,j);
			scanf ("%d",&arr2[i][j]);
		}
	}
	
	
	
	for (i=0 ; i<3 ; i++)
	{
		for (j=0 ; j<3 ; j++)
		{
			arr3[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
	
	printf ("The sum of two matrix is : ");
	
	
	for (i=0 ; i<3 ; i++)
	{
		printf ("\n");
		for (j=0 ; j<3 ; j++)
		{
			printf ("%d",arr3[i][j]);
		}
	}
	
	
	
}
