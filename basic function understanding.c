#include<stdio.h>
int main ()
{
	int a,b ;
	printf ("Enter two no :   ");
	scanf ("%d %d",&a ,&b);
	printf ("\nHello");  //1
	int h = sum (a,b);              //ACTUAL PARAMETER
	printf ("\nThe sum is : %d",h);   //2
	
	printf ("\nprantik");
}
sum (int x , int y)                //FORMAL PARAMETER                                           
{
//	x=2 ; y =4 ;
	int z ;
	z=x+y ;
	printf ("\nAfter swap the value is : %d",z);
	int q =2 ;
	int p = multiplication(z , q);
	printf ("\nThe mult of sum*2 is : %d",p);
	return z ;
}
multiplication (int x , int y)
{
	int c = x*y ;
	printf ("\nThe multiplication of sum and 2 is : %d",c);
	return c;
}
