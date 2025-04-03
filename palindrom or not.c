#include <stdio.h>
int main ()
{
	int i , n , rem , nd ;
	int rlno = 0;
	printf ("Enter a no to be execute: ");
	scanf ("%d",&n);
	printf ("Enter the no of digits in the given no : ");
	scanf ("%d",&nd);
	int touch = n ;
	printf ("\nThe reverse no is : ");
	for (i=1 ; i<=nd ; i++)
	{
	     rem = n%10 ;
		 n = n/10 ;
		 printf ("%d",rem);
		 rlno = rem + rlno*10 ;
		 	
	}
//	printf ("\n %d",rlno);
	
	if (touch == rlno)
	{
		printf ("\nIt is Palindrom no ");
		
	}
	else {
		printf ("\nIt is not palindrom no");
	}
	return 0 ;
	
}
