#include<stdio.h>
int main ()
{
	int year,month,day,n;
	printf("Enter the number of n: ");
	scanf("%d",&n);
	year=n/365;
	printf("year=%d",year);
	month=n%365;
	month=month/30;
	printf("\nmonth=%d",month);
	month=n%365;
	day=month%30;
	printf("\nday=%d",day);
	return 0;
	}
