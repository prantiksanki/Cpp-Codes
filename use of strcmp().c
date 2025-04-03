#include <stdio.h>
int main ()
{
	char a[50];
	char b[50];
	printf ("Enter a statement : ");
	gets (a);
	printf ("Enter another statement : ");
	gets (b);
	int s = strcmp(a,b);
	printf ("The compressed string is  is %d\n",s);
	return 0;
}
