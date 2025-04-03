#include<stdio.h>
int main ()
{
	int i,rem;
    int prod=1;
	printf("Enter the value of no: ");
	scanf("%d",&i);
	while (i>0)
	{
	rem=i%10;
    prod = prod *rem;
    i=i/10;
	} 
	printf ("The product of terms is = %d",prod);
	return 0 ;
}
