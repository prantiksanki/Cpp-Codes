#include<stdio.h>
int main ()
{
	int n,rem,mult;
	mult=1;
	printf ("Enter the no : ");
	scanf("%d",&n);
	while (n>0)
	{
		rem=n%10;
		mult=mult*rem;
		n=n/10;
	} 
	printf ("The multiplication of no = %d",mult);
	return 0 ;
}
