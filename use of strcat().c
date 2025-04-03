#include<stdio.h>
#include<string.h>
int main ()
{
	char a[50] = "Hello";
	char b[50] = "World";
    strcat (a,b);
    printf ("\n now the string is :\t %s",a);
	return 0;
}
