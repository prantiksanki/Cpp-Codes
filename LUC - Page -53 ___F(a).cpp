#include<stdio.h>
int main ()
{
	int ang1, ang2 , ang3;
	printf ("Enter the value of angle-1 : ");
	scanf("%d",&ang1);
	printf("Enter the value of angle-2: ");
	scanf("%d",&ang2);
	printf("Enter the value of angle-3: ");
	scanf("%d",&ang3);
	int sum;
	sum = (ang1+ang2+ang3);
	if (sum==180){
		printf ("This triangle is valid.");
	} else {
		printf ("This is not a valid triangle");
	}
	return 0 ;
}
