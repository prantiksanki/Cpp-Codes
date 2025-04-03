#include <stdio.h>
int main ()
{
	char a[50];
	printf ("Enter a statement : ");
	gets (a);
	int s = strlen(a);
	printf ("The length of this string is %d",s);
	return 0;
}
