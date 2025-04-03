#include <stdio.h>
int main ()
{
	int arr[5]={1,2,3,4,5};
	int size = sizeof(arr)/sizeof(arr[0] );
	int i ;
	printf ("Array in actual order : ");
	for (i=0 ; i<size ; i++)
	{
		printf ("%d\t",arr[i]);
	}
	
	printf ("\n");
	printf ("Array in reverse order : ");
	
	for (i=size-1 ; i>=0 ; i--)
	{
		printf ("%d\t",arr[i]);
	}
}
