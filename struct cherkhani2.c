#include <stdio.h>
int main ()

{
	struct 
	{
		int i ;
		char c ;
	} myVar = {.i = 100 , .c='A'};
	
	printf ("%d %c" , myVar.i , myVar.c) ;
}
