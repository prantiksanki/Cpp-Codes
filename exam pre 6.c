#include<stdio.h>
int main ()
{
	int n ,a,b;
	printf ("addition(1) / multiplication(2) : ");
	scanf ("%d",&n);
	switch(n)
	{
		case 1:
			printf ("Enter two no : ");
			scanf ("%d %d",&a ,&b);
			printf ("The sum is : %d",a+b);
			break ;
			case 2: 
			printf ("Enter two no : ");
			scanf ("%d %d",&a ,&b);
			printf ("The multiplication of these two no is : %d",a*b);
			break ;
			default :
				printf ("Invalid Input");
	}
	return 0;
}
