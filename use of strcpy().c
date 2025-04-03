#include <stdio.h>
int main ()
{
	char source[] = "program";
	char dst[50];
	strcpy (dst , source);
	printf ("Source : %s\n",source);
	printf ("Destination : %s\n",dst);
	return 0;
}
