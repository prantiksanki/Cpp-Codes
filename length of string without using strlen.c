#include <stdio.h>
int main ()
{
	char str[]="IIT is my dream for whole life ";
	int size = sizeof(str)/ sizeof(str[0]);
	printf ("%d",size-1);
}
