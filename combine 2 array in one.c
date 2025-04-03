#include <stdio.h>
int main ()
{
	int arr1[] = {1,2,3,4,5};
	int arr2[] = {6,7,8,9,10};
	int size1 = sizeof(arr1)/sizeof (arr1[0]);
	int size2 = sizeof(arr2)/sizeof(arr2[0]);
	int size3 = size1 + size2 ;
	int arr3[size3];
	int i ,j ;
	
	for (i=0 ; i<size1 ; i++)
	{
		arr3[i] = arr1[i];
	}
	for (j=0 ; j<size2 ; j++)
	{
		arr3[j+size1] = arr2[j];
	}
	
	printf ("\nNow the nos of this updated array are : ");
	for (i=0 ; i<size3 ; i++)
	{
		printf ("%d\t",arr3[i]);
	}
}
