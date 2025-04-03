//Sum of elements of upper triangle ....;
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
	for (i=0;i<=2;i++)
	{
		for (j=0;j<=2;j++)
		{
			if (j>i){
				sum = sum + matrix[i][j];
			} else {
				printf (" ");
			}
		}
	} 
	printf ("The sum of upper triangle  = %d",sum);
	return 0;
}
