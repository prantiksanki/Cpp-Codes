#include<stdio.h>
int main ()
{
	int i,j;
	int matrix[i][j];
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("matrix[%d][%d] : ",matrix[i][j]);
			scanf("%d",&matrix[i][j]);
		}
	} 
	printf ("\nThe Matrix is : ");
	for (i=0;i<3;i++)
	{ 
	printf ("\n");
		for (j=0;j<3;j++)
		{
		    printf ("%d\t",matrix[i][j]);	
		}
	}
	return 0;
}
