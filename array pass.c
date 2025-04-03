#include <stdio.h>
int main ()
{
	int arr[5] = {1,2,3,4,5};
	int i ;
	
	print (arr);
	
}

int print (int arr[])
{
	int i ;
	for (i=0 ; i<5 ; i++)
	{
		printf ("%d\t",arr[i]);
	}
}
