#include <stdio.h>
int main ()
{
	int rem , i , n ;
	printf ("\nEnter the no : ");
	scanf ("%d",&n);
	
	int prod = 1 ;
	int sum = 0 ;
	
	for (i=1 ; i<4 ; i++)
	{
		rem = n%10 ;
		n=n/10 ;
		prod = prod * rem ;
		sum = sum + rem ;
	//	printf ("\tThe digits of this no is : %d \t",rem);
	}
//	printf ("\tThe digits of this no is : %d \t",rem);
	printf ("\nThe sum of the digit of this no is : %d ",sum );
	printf ("\nThe product of the digit of this no is : %d ",prod );
	return 0 ;
	
}
