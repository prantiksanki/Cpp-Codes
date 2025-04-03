#include<stdio.h>
int calsum (int  , int , int );
int mult (int , int );
int main ()
{
	int a,b,c,sum;
	printf ("Enter any three no : ");
	scanf ("%d %d %d",&a ,&b ,&c);
    calsum (a,b,c);
    mult (a,b);
	return 0;
} 
int calsum (int a, int b ,int c )
{
	int d;
	d= a+b+c ;
	printf ("Sum = %d\n",d);
	return 0 ;
} 
int mult (int a , int b )
{
	int s ;
	s= a*b ;
	printf ("Multiplication = %d\n",s);
	return 0;
}
