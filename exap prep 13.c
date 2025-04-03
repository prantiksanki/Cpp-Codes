#include<stdio.h>
int main ()

{
	int x,y;
	printf ("The first no is : ");
	scanf ("%d",&x);
	printf ("The second no is : ");
	scanf ("%d",&y);
	
	printf ("Before swipe the nos : x=%d , y=%d ",x,y);
	
	x= x+y ;
	y= x-y ;
	x= x-y ;
	printf ("After swipe the no : x=%d , y=%d",x,y);
}
