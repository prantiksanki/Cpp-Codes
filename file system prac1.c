#include <stdio.h>
#include <stdlib.h>
int main ()
{
	FILE*fp ;
	fp = fopen("test.txt" , "r");
	if (fp = NULL)
	{
		puts ("Can't open file");
		exit(1) ;
	}
	return  0 ;
	
}
