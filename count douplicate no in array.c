#include <stdio.h>
int main ()
{
	int arr[] = {1,2,2,4,5,2,5,8};
	int i,j ;
	int count=0 ;
	for (i=0 ; i<8 ; i++)
	{
		for (j=i+1 ; j<8 ; j++)
		{
			if(arr[i]==arr[j])
			{
				count++ ;
				break ;
			}
		}
	}
	printf ("The no of douplicate no is : %d",count);
}
