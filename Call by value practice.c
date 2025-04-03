#include <stdio.h>
int swap (int ,int);
int main ()
{
	int a,b ;
	printf ("\nEnter the two nos : ");
	scanf ("%d %d",&a,&b);
	printf ("\nBefore swapping value of actual parametre is %d %d ",a,b);
	int h = swap(a,b);
		printf ("\nAfter swapping value of actual parametre in main function is %d %d",a,b);
	return 0;
} 
swap (int a,int b)
{
	int temp;
	temp = a ; 
	a=b;
	b = temp;
	printf ("\nAfter swapping value of actual parametre in swap function is %d %d",a,b);
	return 0; ;
}
