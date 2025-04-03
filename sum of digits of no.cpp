#include<stdio.h>
int main ()
{
	int n;
	int sum=0, rem;
	printf("Enter the no : ");
	scanf("%d",&n);
	int temp=n;
	while(n>0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	} 
	printf("sum=%d",sum);
	return 0;
}
