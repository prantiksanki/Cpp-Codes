//The sum of Antidiagonal elements of an matrix;
#include <stdio.h>
int main ()
{
	int i,j;
	int sum=0;
	int matrix[3][3];
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf ("martix[%d][%d] : ",i,j);
			scanf ("%d",&matrix[i][j]);
		}
	} 
	printf ("\nThe matrix is : ");
	for (i=0;i<3;i++)
	{ 
    	printf ("\n");
		for (j=0;j<3;j++)
		{
			printf ("%d\t",matrix[i][j]);
		}
	} 
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
		if (i+j==2)
			{
				sum=sum+matrix[i][j];
			} else {
				printf (" ");
			}
		}
	} 
	printf ("The sum of Antidiagonal is : %d ",sum);
	return 0;
}
