#include <stdio.h>
int main ()
{
	int a,b,c ;
	printf ("Enter value of a,b which assign a^b : ");
	scanf ("%d %d",&a ,&b);
	
	printf ("Enter the no to find factorial : ");
	scanf ("%d",&c);
	
	factandpow(&a,&b,&c); 
}


int factandpow (int*a , int*b , int*c)
{
	int i ;
	int mult = 1 ;
	int p = pow(*a,*b);
	printf ("\n%d to the power %d is : %d ",*a,*b,p);
	
	for (i=*c ; i>0 ; i--)
	{
		mult = mult * i ;
	}
	
	printf ("\nThe Factorial of %d is : %d ",*c , mult);
}
