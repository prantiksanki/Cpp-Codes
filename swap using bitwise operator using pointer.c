//"void swap(int *, int*)" swaps the two numbers using bitwise operator and displays them


#include <stdio.h>
int swap (int* , int*);
int main ()
{
	int a , b;
	printf ("Enter the values of a and b : ");
	scanf ("%d %d",&a , &b);
	printf ("\nValue of a=%d and b=%d before swap",a,b);
	swap (&a , &b);
	printf ("\nValue of a=%d and b=%d after swap",a,b);
	return 0;
}
int swap (int*x , int*y)
{
	*x = *x^*y ;
	*y = *x ^ *y ;
	*x = *x ^ *y ;
	printf ("\nValue of a=%d and b = %d after swap.",*x , *y);
}
