#include <stdio.h>
#include<string.h>
int main ()
{
	char str[30];
	printf ("\nEnter the name : ");
	gets (str);
	int j= strrev(str);
	printf ("\nReverse string is : %s",j);
	if (str[30]==j)
	{
		printf ("\nThis is palindrom name.");
	} else 
	{
		printf ("\nThis is not palindrom name.");
	} 
	return 0;
}
