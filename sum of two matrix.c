#include<stdio.h>
int main ()
{
	int i,j,k,l,a,b;
	int matrix [3][3];
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf ("matrix [%d][%d] : ",i,j);
			scanf ("%d",&matrix[i][j]);
		}
	} 
	printf ("The First Matrix is : ");
	{
		for (i=0;i<3;i++)
		{ 
		printf ("\n");
			for (j=0;j<3;j++)
			{
				printf("%d\t",matrix[i][j]); 
			}
		}
	} 
	printf ("\n");
	
	
	// THE ANOTHER MATRIX ;
	int arr[3][3];
	for( k=0;k<3;k++)
	{ 
		for (l=0;l<3;l++)
		{
			printf ("arr[%d][%d] : ",k,l);
			scanf ("%d",&arr[k][l]);
		}
	} 
	printf ("The another matrix is : ");
	for (k=0;k<3;k++)
	{ 
	printf ("\n");
		for (l=0;l<3;l++)
		{
			printf ("%d\t",arr[k][l]);
		}
	} 
	
	
	// SUM OF MATRIX;
	printf ("\n");
	int str[3][3];
	for (a=0,i=0,k=0;a<3,i<3,k<3;a++,i++,k++)
	{
		for (b=0,l=0,j=0;b<3,l<3,j<3;b++,l++,j++)
   {   
       str[a][b] = matrix[i][j] + arr[k][l] ;    
	}
	}  
	printf ("Sum of Two matrix : ");
	for (a=0;a<3;a++)
	{
		printf ("\n");
		for (b=0;b<3;b++) 
		{
			printf ("%d\t",str[a][b]);
		}
	}
	return 0;
}
