//Reverse the digits of a given number and check if given number is a Palindrome or not using do-while


#include <stdio.h>
int main ()
{
	int n , rem ,reversed=0 , original;
	printf ("Enter the number : ");
	scanf ("%d",&n);
	original = n ;
    do 
    {
    	rem = n%10 ;
    	reversed = reversed * 10 + rem;
    	n = n/10 ;
	}
    while (n>0)	;
    
	printf ("\n The Reverse no is : %d",reversed);
    if (reversed == original)
    {
    	printf ("\n It is palindrom no");
	} else 
	{
		printf (" \n It is not palindrom no");
	}
    return 0 ;
    
}
