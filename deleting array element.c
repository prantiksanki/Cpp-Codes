//DELETING ELEMENT OF AN ARRAY

#include <stdio.h>
int main ()
{
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int i ;
	for (i=0 ; i<9 ; i++)
	{
	if (i==4)
		{
			continue ;
		} 
		printf ("\narr[%d] = %d",i , arr[i]);
		
	}
	
}
