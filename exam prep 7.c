#include <stdio.h>
int main ()
{
	int arr[100];
	int i ;
	int sum =0 ;
	for (i=0 ; i<10 ; i++)
	{
		printf ("Enter the value of arr[%d]: ",i);
		scanf ("%d",&arr[i]);
		sum = sum + arr[i];
	}
	printf ("The sum of the array elements is : %d",sum );
	return 0 ;
}
