#include <stdio.h>
int main()
{
	int ch ;
	printf ("Enter a character : ");
	scanf("%c",&ch);
	if (ch>=97 && ch<=122)
	{
		printf("The character is lowercase character");
	} else if (ch>=65&&ch<=90)
	{
		printf ("The character is uppercase character");
	} else 
	{
		printf ("Wrong input");
	}
	return 0 ;
}
