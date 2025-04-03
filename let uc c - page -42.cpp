#include<stdio.h>
int main ()
{
	int n,disc,bill;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	if (n>1000){
	bill=n-(n*10)/100;
	printf ("The bill with discount is = %d",bill);
	} else {
		bill =n ;
		printf ("The bill without discount is =%d",bill);
	} 
	return 0;
}
