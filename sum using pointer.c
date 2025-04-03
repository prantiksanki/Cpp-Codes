//Exp-5-2-(iii)


#include <stdio.h>
int *getrem(int* , int*);
int main ()
{
	int x = 10;
	int y = 7 ;
	int*rem = NULL ;
	rem = getrem(&x , &y);
	printf ("remainder : %d \n",*rem);
 	return 0 ;
	
}
int*getrem (int*m , int*n)
{
	int s = *m % *n ;
	return &s ;
}
