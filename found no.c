#include <stdio.h>
int main ()
{
	int n ,found;
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	
	printf ("Enter the no you want to find : ");
	scanf ("%d",&n) ;
	
	int i ;
	for (i=0 ; i<10 ; i++)
	{
		
		if (n == arr[i])
		{
			found = 1 ;
			break ;
		}
		
	}
	
	
	if (found == 1)
	{
		printf ("The no is found and in the position %d",i+1);
	}
	else 
	{
		printf ("Sorry ! Not found");
	}
}
