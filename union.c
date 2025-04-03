#include<stdio.h>
#include <string.h>
union Data 
{
	int i ;
	float j ;
	char str[20] ;
} ;

int main ()
{
	union Data data ;
	data.i = 10 ;
	data.j = 89.9 ;
	strcpy(data.str , "C programming") ;
	printf ("%d\n\n" , sizeof(data));
	
	printf ("%d" , data.i );
}
