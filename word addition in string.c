#include <stdio.h>
int main ()
{
  char str[10] = "hello";
	str[5]='z';         //REDEFINE STRING
	str[7] = 'y';
	//printf ("%s",str);
	puts(str);
}
