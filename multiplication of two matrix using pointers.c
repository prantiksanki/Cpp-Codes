#include <stdio.h>
int main ()
{
	int *arr1[3][3];
	int *arr2[3][3];
	int i ,j , k , l ;
	printf ("Enter the elements of 1st matrix : ");
	for (i=0 ; i<3 ; i++)
	{
		for (j=0 ; j<3 ; j++)
		{
			printf ("arr1[%d][%d] : ",i,j);
			scanf ("%d",&arr1[i][j]);
		}
	}
	 prinf ("\nEnter the elements of 2nd matrix : ");
	  for (k=0 ; k<3 ; k++)
	  {
	  	for (l=0 ;  l<3 ; l++)
	  	{
	  		printf ("arr2[%d][%d] : ",i,j);
	  		scanf ("%d",&arr2[i][j]);
		  }
	  }
	 mult (&arr1 , &arr2) ;
	
	
	
}

int mult (int *arr1[3][3] , int *arr2[3][3])
{
	int i ,j  ,k ;
	int arr3[3][3];
	for (i=0 ; i<3 ; i++)
	{
		for (j=0 ; j<3 ; j++)
		{
			arr3[i][j] = 0 ;
			for  (k= 0 ; k<3 ; k++)
			{
				arr3[i][j] += *arr1[i][k] * *arr2[i][k];
				
			}
		}
	}
	printf ("The product of the two matrices is : ");
	for (i=0 ; i<3 ; i++)
	{
		for( j=0 ; j<3 ; j++)
		{
			
			printf ("%d\t",arr3[i][j]);
		}
		printf ("\n");
	}
	
	return 0 ;
}
