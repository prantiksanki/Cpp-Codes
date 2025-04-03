#include<stdio.h>
int main ()
{
	int i,j;
	int arr[3][3];
	int prod = 1;
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf ("arr[%d][%d] : ",i,j);
			scanf ("%d",& arr[i][j]);
		}
	} 
	printf ("The Matrix is : ");
	for (i=0;i<3;i++) {
		printf ("\n");
		for (j=0;j<3;j++)
		{
			printf ("%d\t", arr[i][j]);
		}
	} 
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
		   if (i=j)
		   {
		   	prod = prod * arr [i][i];
		   	printf ("%d",prod);
		   } 
		   else {
		   	printf (" ");
		   }
		}
	} 
	printf ("The product of the diagonal elements is %d",prod);
	 return 0;
}
	
	
