#include<stdio.h>
int main ()
{
	int i,j;
	int arr[100][100];
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf ("arr[%d][%d] : ",i,j);
			scanf ("%d",&arr[i][j]);
			
		}
	} 
	printf ("\nThe matrix is :   ");
	for (i=0;i<3;i++)
	{ 
	    printf ("\n");
		for (j=0;j<3;j++)
		{
			printf ("%d \t",arr[i][j]);
		}
	}
	return 0;
}
