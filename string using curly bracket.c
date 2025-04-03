#include <stdio.h>
#include<string.h>
int main ()
{
	char str[] = {'h','e','l','l','o','\0'};
	puts (str);
	printf ("%s",str);
	printf ("\nSize of this string is : %d",sizeof(str));
}
