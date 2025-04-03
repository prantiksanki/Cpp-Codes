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
		sum=(sum*10)rem;
	} 
	printf("the reverse no is =%d",sum);
	return 0;
}
