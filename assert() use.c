#include<stdio.h>
#include <assert.h>
int main ()
{
	int a ;
	printf ("Enter a no : ");
	scanf ("%d",&a);
	
	assert(a>=10);
	printf ("The no is greater than 10");
	
}
