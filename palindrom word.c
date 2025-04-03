#include <stdio.h>
#include <string.h>
int main ()
{
	char str[] = "prantik";
	printf ("\nThe reverse of this no : %s",strrev(str));
	if (strrev(str) == str)
	{
		printf ("\nIt is a palindrom word");
	}else 
	{
		printf ("\nIt is not a palindrom word");
	}
}
