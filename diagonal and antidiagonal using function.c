#include <stdio.h>
int main ()
{
	int arr[3][3];
	int i ,j ;
	
	for (i=0 ; i<3 ; i++)
	{
		for (j=0 ; j<3; j++)
		{
			printf ("arr[%d][%d] : ",i,j);
			scanf ("%d",&arr[i][j]);
		}
		
	}
	
    diagonal(arr);
    antidiagonal (arr);
	
}

int diagonal(int arr[3][3])
{
	int i,j ;
	printf ("\nThe diagonal elements are : ");
	for (i=0 ; i<3 ; i++)
	{
		for (j=0 ; j<3 ; j++ )
		{
			if (i==j)
			{
				printf ("%d\t",arr[i][j]);
			}
		}
	}
}
	
	int antidiagonal (int arr[3][3])
	{
		int i ,j ;
		printf ("\nThe antidiagonal elements are : ");
		for (i=0 ; i<3 ; i++)
		{
			for(j=0 ; j<3 ; j++)
			{
				if (i+j == 2)
				{
					printf ("%d\t",arr[i][j]);
				}
			}
		}

	}
