#include <stdio.h>
#define Isdigit(x) (x>=0 && x<=50)
int main ()
{
	int r ;
	r=4 ;
	int a ;
	a=Isdigit(r);
	printf ("The no is between 0 and 50");
}
