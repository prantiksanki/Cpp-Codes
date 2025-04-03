#include <stdio.h>
int main ()
{
	int arr[]  = {4,7,12,3,9,67};
	int size = sizeof(arr) / sizeof(arr[0]);
	int i ,j;
	printf ("The actual elements of this array is : ");
	
	for (i=0 ; i<size ; i++)
	{
		printf ("%d\t",arr[i]);
		
	}
	
	sort (arr , size);
}
	
	int sort (int arr[] , int size)
	{
	    int i ,j ;
	
	for (i=0 ; i<size -1 ; i++)
	{
		for (j=0 ; j<size-i-1 ; j++)
		{
			if (arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp ;
			}
		}
	}
	
	
	
	printf ("\nThe ascending order of this array is : ");
	for (i=0 ; i<size ; i++)
	{
		printf ("%d\t",arr[i]);
	}
}

