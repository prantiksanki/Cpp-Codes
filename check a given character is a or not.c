//C program to check whether a given character is ‘a’ or not.

#include <stdio.h>
int main ()
{
	int l;
	printf ("Enter a letter : ");
	scanf ("%c",&l);
	printf ("\n %d",l);
	if (l==97)
	{
		printf ("The given character is a");
	} 
	else {
		printf ("This given character is not a");
	}
	return 0;
}
