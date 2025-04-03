#include <stdio.h>
int main ()
{
	int n , rem , sum = 0 , prod = 1 , count , i;
	
	printf ("Enter the no : ");
	scanf ("%d",&n);
	
	int tmp = n ;
	
 printf ("Enter the no of digits of this no : ");
 scanf ("%d",&count);
	

	printf ("\nThe digits of this no are : ");
	
	for (i= 0 ; i< count; i++)
	{
		rem = tmp%10 ;
		printf ("%d\t",rem);
	  tmp = tmp/10 ;
	}
	
	tmp = n ;
	
	for (i=0 ; i<count ; i++)
	{
		rem = tmp%10 ; 
		sum = sum + rem ;
		tmp = tmp/10 ;
	}
	
	printf ("\nThe sum of these digits is : %d",sum);
	
	
	tmp = n ;
	for (i=0 ; i<count ; i++)
	{
		rem = tmp%10 ; 
		prod = prod * rem ;
		tmp = tmp/10 ;
	}
	printf ("\nThe product of these digits is : %d",prod);
}
