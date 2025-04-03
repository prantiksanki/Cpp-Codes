#include<stdio.h>
int main ()
{
	int i,j,k,l,a,b;
	int matrix [3][3];
	int sum = 0;
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
	
	
	// MULTIPLICATION OF MATRIX;
	printf ("\n");
	int str [3][3];
	for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            str[i][j] = 0;
            for (k = 0; k < 3; k++) {
                str[i][j] += matrix[i][k] * arr[k][j];
            }
        }
    }

    printf("The product of the two matrices is: \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", str[i][j]);
        }
        printf("\n");
    }

}
