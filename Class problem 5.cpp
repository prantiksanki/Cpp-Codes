#include<stdio.h>
int main()
{
    int p,n;
    float r,si;
    printf("Enter value of p: ");
    scanf("%d",&p);
    printf("Enter value of r: ");
    scanf("%f",&r);
    printf("Enter value of n: ");
    scanf("%d",&n);
    si=(p*n*r)/100;
	printf("simple interest is = %f",si);
	return 0;
}
