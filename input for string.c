#include <stdio.h>
#include <string.h>

int main ()
{
	char str[50] ;
	printf ("Enter a statement : ");
	gets (str) ;
	int i ;
	for (i= 0 ; str[i]!='\0' ; i++)
	{
		printf ("%c",str[i]);
	}
}
