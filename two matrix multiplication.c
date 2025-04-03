#include <stdio.h>
int main ()
{
	int arr1[3][3] , arr2[3][3] , arr3[3][3];
	int i , j,k ;
	
	printf ("Enter elements of matrix 1 : ");
	for (i=0 ; i<3 ; i++)
	{
		for (j=0 ; j<3 ; j++)
		{
			printf ("arr1[%d][%d] : ",i,j) ;
			scanf ("%d",&arr1[i][j]);
		}
	}
	
	
	
		printf ("Enter elements of matrix 2 : ");
	for (i=0 ; i<3 ; i++)
	{
		for (j=0 ; j<3 ; j++)
		{
			printf ("arr2[%d][%d] : ",i,j) ;
			scanf ("%d",&arr2[i][j]);
		}
	}
	
	
	
	printf ("\nThe 1st matrix is : \n");
	
	for (i=0 ; i<3 ; i++)
	{
		for (j=0 ; j<3 ; j++)
		{
			printf ("%d\t",arr1[i][j]);
			
		}
		printf ("\n");
	}
	
	
		printf ("\nThe 2nd matrix is : \n");
	
	for (i=0 ; i<3 ; i++)
	{
		for (j=0 ; j<3 ; j++)
		{
			printf ("%d\t",arr2[i][j]);
			
		}
		printf ("\n");
	}
	
	
	for (i=0 ; i<3 ; i++)
	{
		for (j=0 ; j<3 ; j++)
		{
			arr3[i][j] = 0 ;
		}
	}
	
	
	
	for (i=0 ; i<3 ; i++)
	{
		for (j=0 ; j<3 ; j++)
		{
			for (k=0 ; k<3 ; k++)
			{
				arr3[i][j] += arr1[i][k] * arr2[k][j];
			}
		}
	}
	
	
	
	printf ("\nThe matrix multiplication is :\n ");
	
	for (i=0 ; i<3 ; i++)
	{
		for (j=0 ; j<3 ; j++)
		{
			printf ("%d\t",arr3[i][j]);
			
		}
		
		printf ("\n");
	}
}
