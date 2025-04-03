#include <stdio.h>
int main ()
{
	int arr1[3][3];
	int arr2[3][3];
	int arr3[3][3];
	int i , j ;
	
	for (i=0 ; i<3 ; i++)
	{
		for (j=0 ; j<3 ; j++)
		{
			printf ("arr1[%d][%d] :  ",i,j);
			scanf ("%d",&arr1[i][j]);
		}
	}
	
	for (i=0 ; i<3 ; i++)
	{
		printf ("\n");
		
		for (j=0 ; j<3 ; j++)
		{
			printf ("%d\t",arr1[i][j]);
		}
	}
	
	
	
		printf ("\n\n");

	
	
		for (i=0 ; i<3 ; i++)
	{
		for (j=0 ; j<3 ; j++)
		{
			printf ("arr2[%d][%d] :  ",i,j);
			scanf ("%d",&arr2[i][j]);
		}
	}
	
 	
	for (i=0 ; i<3 ; i++)
	{
		printf ("\n");
		
		for (j=0 ; j<3 ; j++)
		{
			printf ("%d\t",arr2[i][j]);
		}
	}
	
	
		printf ("\n\n");

	
	
	for (i=0 ; i<3 ; i++)
	{
		for (j=0 ; j<3 ; j++)
		{
			arr3[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
	
	
	for (i=0 ; i<3 ; i++)
	{
		printf ("\n");
		
		for (j=0 ; j<3 ; j++)
		{
			printf ("%d\t",arr3[i][j]);
		}
	}
	
	
		printf ("\n\n");

}
