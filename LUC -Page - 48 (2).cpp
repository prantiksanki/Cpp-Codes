#include<stdio.h>
int main ()
{
	int year;
	printf ("Input the year no : ");
	scanf("%d",&year);
	if (year%4==0){
		printf ("This is leap year");
	} else {
		printf("This is not leap year");
	}
	return 0;
}
