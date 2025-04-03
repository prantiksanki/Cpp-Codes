#include<stdio.h>
int main()
{
	int a,b,c;
	a=10;
	b=11;
	c=12;
	if(a>b && a>c) {
		printf("a is greatest");
	} else if(b>a && b>c){
		printf("b is greatest");
	} else(c>a && c>b);{
		printf("c is greatest");
	}
	return 0;
}
