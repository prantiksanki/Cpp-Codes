#include<stdio.h>
int main ()
{
	int a,b,i,result;
	int prod = 1;
	printf ("Enter the value of a and b : ");
	scanf ("%d %d",&a,&b);
	i=1;
	while (i<=b)
	{
		result = a*b;
		prod = (prod*1)+result;
		b++;
	}
	printf ("Result = %d",result);
	return 0;            
}
