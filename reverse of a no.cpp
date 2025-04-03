#include<stdio.h>
int main ()
{
	int n,rem,i;
	int sum =0;
	printf ("Enter the number : ");
	scanf("%d",&n);
	for (i=n;i>0;i=i/10){
		rem=i%10;
		sum=(sum*10)+rem;
	} 
	printf ("The Reverse no is = %d",sum);
	return 0;
}
