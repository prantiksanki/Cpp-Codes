#include <stdio.h>
int main ()
{
	int arr[10] = {1,2,3,4,5,6};
	arr[8]= 7 ;
	int i ;
	for (i=0 ; i<=8 ; i++)
	{
		printf ("%d\t",arr[i]);
	}
	return 0 ;
}
