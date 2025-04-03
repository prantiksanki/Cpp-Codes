#include <stdio.h>
int main ()
{
	int a , b , c , d , e ;
	printf ("Enter any 5 no : ");
	scanf ("%d %d %d %d %d",&a , &b ,&c , &d ,&e);
	int h = sum(&a , &b , &c , &d , &e);
	int i = avg(&a,&b,&c,&d,&e);
	printf ("\nThe sum of these five nos is : %d ",h);
	printf ("\nThe avarage of these five nos is : %d ",i);
}

int sum (int*a , int*b ,int*c,int*d,int*e )
{
	
	int sum = *a+*b+*c+*d+*e ;
	return sum ;
}
 int avg (int*a , int*b ,int*c,int*d,int*e )
 {
 	int avarage ;
 	avarage = (*a+*b+*c+*d+*e)/5 ;
 	return avarage ;
 }
