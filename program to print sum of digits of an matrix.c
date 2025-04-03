#include<stdio.h>
int main ()
{
	int i,j;
	int arr[3][3];
	int sum = 0;
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
	for (i=0;i<=2;i++)
	{
		for (j=2;j>=0;j--)
		{
			sum=sum + arr[i][j];
		}
	}  
	printf ("The sum of terms = %d",sum);
	return 0;
}
