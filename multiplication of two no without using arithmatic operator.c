//Multiplication of 2 no without using arithmatic operator

#include <stdio.h>
int main ()
{
	int n1 , n2 ,i ;
	int result = 0 ;
	printf ("Enter the first no : ");
	scanf ("%d",&n1);
	
	printf ("Enter the second no : ");
	scanf ("%d",&n2);
	
	for (i=0 ; i<n2 ; i++ )
	{
		result += n1 ;
	}
	printf ("The multiplication of %d and %d is %d ",n1 , n2 , result);
	return 0;
}
