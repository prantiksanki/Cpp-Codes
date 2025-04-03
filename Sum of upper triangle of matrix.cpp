#include<stdio.h>
int main ()
{
	int i,j;
	int arr[3][3];
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
	// now sum of upper triangle;
	int sout ;
	sout= arr[0][1] + arr[0][2] + arr[1][2] ;
	printf ("\nThe sum of upper triangle is = %d",sout);
	return 0;
}
