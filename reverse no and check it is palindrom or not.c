//Reverse the digits of a given number and check if given number is a Palindrome or not using do-while


#include <stdio.h>
int main ()
{
	int n , rem ;
	int rn =0 ;
	printf ("Enter the number : ");
	scanf ("%d",&n);
	int temp ;
	temp = n ;
    do 
    {
    	rem = n%10 ;
    	rn = rn + rem ;
    	n = n/10 ;
	}
    while (n>0)	;
    printf ("The Reverse no is : %d",rn);
    if (rn == temp)
    {
    	printf ("It is palindrom no");
	} else 
	{
		printf ("Invalid Input");
	}
    return 0 ;
    
}
