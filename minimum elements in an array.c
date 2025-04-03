#include <stdio.h>
int main ()
{
	int arr[5] = {10,18,9,87,2};
	
	findmin(arr);
}

int findmin (int arr[5])
{
	int min = arr[0];
	int i ;
	 
	 for (i=1 ; i<5 ; i++)
	 {
	 
	if (min > arr[i])
	{
		min = arr[i] ;
    
	}
}
	printf ("The minimum no is : %d ",min);
}
