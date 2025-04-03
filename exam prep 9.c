#include <stdio.h>
int main ()
{
	int i,j;
	int arr[100];
	int positive = 0 ;
	int negetive = 0 ;
	int zero = 0 ;
	for (i=0;i<10 ; i++)
	{
		printf ("Enter the array elements arr[%d] : ",i);
		scanf ("%d",&arr[i]);
	}
		
	for (i=0;i<10 ; i++)
	{
		if (arr[i]>0)
		{
			positive++ ;
		} 
		else if (arr[i]==0)
		{
			zero++ ;
		} 
		else if (arr[i]<0)
		{
			negetive ++ ;
		}
		else {
			printf (" ");
		}
	}
	printf ("The total no of positive , negetive , zero elements are : %d %d %d",positive , negetive , zero);
}
