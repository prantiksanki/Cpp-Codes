#include <stdio.h>
int main ()
{
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int arr1[9];
	int i ;
	 for (i=0;i<9 ; i++)
	 {
	 	arr1[i] = arr[i];
	 }
	 
	 for (i=0 ; i<9 ; i++)
	 {
	 	printf ("%d\t",arr1[i]);
	 }
}
