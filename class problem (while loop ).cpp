#include<stdio.h>
int main ()
{
	int n;
	int sum=1, rem;
	printf("Enter the no : ");
	scanf("%d",&n);
	int temp=n;
	while(n>0)
	{
		rem=n%10;
		sum=sum+(rem*rem*rem);
		n=n/10;
	} 
	if(temp==sum)
	printf("armstrong no.");
	else
	printf (" not armstrong no");
	return 0;
}
