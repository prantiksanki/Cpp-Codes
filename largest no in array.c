#include <stdio.h>
int findmax (int arr[] , int size)
{
	//printf ("%d\n",arr[0]);
	int i,j;
	for (j=0;j<5;j++)
	{
	
	for (i=1;i<size ; i++);
	{
		int max ;
		if (arr[j] < arr [i])    
		{
			  max = arr [i];
			
		}
		printf ("The max no is : %d",max);
	} 
	return 0 ;
	}
}

int main ()
{
	int arr [5] = {76,89,67,23,24};
	printf ("The largest no is %d ",findmax(arr,5));
}
