#include <stdio.h>
int main ()
{
	char arr[] = {'a','b','c','b','d','b'};
	int i ;
	int count = 0 ;
	for (i=0 ; i<6 ; i++)
	{
		if (arr[i]=='b')
		{
		
		count++ ;
	}
	}
	
	printf ("The no of appearence of 'b' is : %d",count);
}
