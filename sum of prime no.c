#include <stdio.h>
int main ()
{
	int a,b,g;
	int count = 0;
	printf ("Enter initial no : ");
	scanf ("%d",&a);
	printf ("Enter final no : ");
	scanf ("%d",&b);
	int i,j;
	for (i=a;i<=b;i++)
	{
		for (j=2;j<b;j++)
		{ 
		      
		      int g = i/j ;
			if (g==0)
			{
				break ;
			} 
			else if (g!=0)
			{
				count ++;
			} 
			else 
			{
				printf ("Invalid Input");
			}
		}
	}
	if (count==1)
	{
		printf ("%d is prime no",i);
	}
}
