#include<stdio.h>
int main ()
{
	int height,base;
	printf("Enter the value of Height: ");
	scanf("%d",&height);
	printf("Enter the value of Base: ");
	scanf("%d",&base);
	int area;
	area=base*height;
	printf("The Area of Parallelogram = %d",area);
	return 0;
}
