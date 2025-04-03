#include <stdio.h>
int main ()
{
	int i;
	for (i=1;i<=100;i++)
	{
		int a,b;
        printf ("\n\nThe value of a : ");
        scanf ("%d",&a);
         printf ("\tThe value of b : ");
        scanf ("%d",&b);
        int sum = a+b ;
        printf ("\tThe sum is : %d", sum);
	}
	return 0;
}
