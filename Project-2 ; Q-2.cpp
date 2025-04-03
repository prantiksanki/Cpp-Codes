#include<stdio.h>
int main ()
{
	int height,length,width;
	int area;
	printf("Enter the value of Height : ");
	scanf("%d",&height);
	printf("Enter the value of Length : ");
	scanf("%d",&length);
	printf("Enter the vlue of Width: ");
	scanf("%d",&width);
	area=2*((height*length)+(length*width)+(width*height));
	printf("The area of cuboid = %d",area);
	return 0;
}
