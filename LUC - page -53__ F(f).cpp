#include <stdio.h>
int main ()
{
	int x1,x2,x3,y1,y2,y3;
	int point1 =(x1,y1);
	int point2 = (x2,y2);
	int point3 = (x3,y3);
	printf ("Enter the value of point 1 : ");
	scanf("%d %d",&x1,&y1);
	printf("Enter the value of point 2 : ");
	scanf("%d %d",&x2,&y2);
	printf ("Enter the value of point 3 : ");
	scanf("%d %d",&x3,&y3);
    int m,n;
    m=(y2-y1)/(x2-x1);
    n=(y3-y2)/(x3-x2);
    if (m==n){
    	printf("The points are in same line");
	} else {
		printf ("The points are not in same line.");
	}
	return 0 ;
	
}
