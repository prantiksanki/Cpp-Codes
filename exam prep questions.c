#include"stdio.h"
 int main ()
{
	int i,j,k,m;
	i=3 ; 
	j=2;
	k=0;
	m=++j && ++i || ++k ;
	printf ("\n %d %d %d %d",i,j,k,m);
	return 0;
}
