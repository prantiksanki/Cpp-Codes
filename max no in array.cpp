#include <stdio.h>
int findmax (int arr[] , int size)
{
	int max = arr [0];
	//printf ("%d\n",arr[0]);
	int i;
	for (i=1;i<size ; i++);
	{
		if (max < arr [i])   
		{
			 max = arr [i];
			
		}
	} 
	return max ;
}
int main ()
{
	int arr [5] = {76,89,67,23,24};
	printf ("The largest no is %d ",findmax(arr,5));
}
