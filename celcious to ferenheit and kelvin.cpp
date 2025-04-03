#include<stdio.h>
int main ()
{
	int c,f,k;
	printf ("Enter the value of temparature in Celcious : ");
	scanf("%d",&c);
	f=((c*9)/5)+32;
	printf ("\nThe value of temperature in ferenheit scale is =%d",f);
	k=(c+273);
	printf ("\nThe value of temperature in kelvin scale is = %d",k);
	return 0;
}
