#include<stdio.h>
struct abc
{
	int a;
	union 
	{
		int x ;
		int y ;
	} ;
	
} ;


int main ()
{
	struct abc a1 ;
	printf ("%d" , sizeof (a1));
}
