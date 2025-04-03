#include<stdio.h>
int main ()
{
	int n;
	printf ("Enter the value of n : ");
	scanf ("%c",&n);
	printf ("%d",n);
	if (n>=33&&n<=47 || n>=58&&n<=64 || n>=91&&n<=96 || n>=123&&n<=126) 
	{
		printf ("\nspecial character");
	}
	 else if (n>=65&&n<=90 || n>=97&&n<=122)
	{
		printf ("\nAlphabate");
	} 
	else if (n>=48&&n<=57)
	{
		printf ("\nDigit");
	} 
	return 0;
}
