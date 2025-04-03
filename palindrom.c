#include <stdio.h>
int main ()
{
	int n , count , rem , sum =  0 ;
	
	printf ("Enter the no : ");
	scanf ("%d",&n) ;
	
	int tmp = n ;
	
	int i ;
	printf ("Enter the no of digits in this no : ");
	scanf ("%d",&count) ;
	
	for (i=0 ; i<count ; i++)
	{
		rem = tmp % 10 ;
		sum = sum*10 + rem ;
		tmp = tmp/10 ;
		
	}
	
	printf ("\nThe reversed no is : %d ",sum) ;
	
	tmp = n ;
	if (sum==tmp)
	{
		printf ("\nIt is a palindrom no");
		
	}
	
	else 
	{
		printf ("\nIt is not a palindrom no");
	}
}
