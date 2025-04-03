#include <stdio.h>
int sum();
int mult();
int div();
int main ()
{

	sum ();
	mult();
	div ();
} 
int sum ()
{  int a,b;
	printf ("\nEnter the value of a : ");
	scanf ("%d",&a);
	printf ("Enter the value of b : ");
	scanf ("%d\n",&b);
	 int n = a+b ;
	printf ("\nThe sum of these two no is : %d",n);
} 
int mult ()
{
	int a,b;
		printf ("\nEnter the value of a : ");
	scanf ("%d",&a);
	printf ("\nb: ");
	scanf ("%d\n",&b);
    int	p=a*b;
	printf ("\nThe multiplication of these two no is : %d",p);
} 
int div()
{  
int a,b;
   	printf ("\na : ");
	scanf ("%d",&a);
	printf ("\nb : ");
	scanf ("%d\n",&b);
   int	q=a/b;
	printf ("\nThe division of these two no is : %d",q);
}
