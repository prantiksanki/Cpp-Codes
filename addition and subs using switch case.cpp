#include <stdio.h>
int main ()
{
	int t;
	int a,b;
	printf ("a : ");
	scanf ("%d",&a);
	printf ("b : ");
	scanf ("%d",&b);
	int sum = a+b ;
	int subs = a-b ;
    printf (" \nPress 1 for addition.");
    printf ("\nPress 2 for substraction.");
    printf ("\n");
    printf ("Choose 1/2 : ");
    scanf ("%d",&t);
    switch (t)
    {
    	case 1 : 
    	    printf ("\nSum : %d",sum);
    	    break ;
    	    case 2 : 
    	    printf ("\nSubstraction : %d",subs);
    	    break ;
    	    default :
    	    	printf ("\nInvalid input");
	}
	return 0;
}
