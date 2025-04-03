#include<stdio.h>
#include<math.h>
int main ()
{
	int a,b,c,d,root;
	printf("Enter the value of a: ");
	scanf("%d",&a);
	printf("Enter the value of b: ");
	scanf("%d",&b);
	printf("Enter the value of c: ");
	scanf("%d",&c);
	d=(b*b)-(4*a*c);
	root=((-b+sqrt(d))/2*a);
	printf ("The first root is =%d",root);
	root=((-b-sqrt(d))/2*a);
	printf("\nThe another root is =%d",root);
	return 0;
}
