#include<stdio.h>
int main ()
{
	float km,m,ft,in,cm;
	printf("\nEnter the distance in kilometre:");
	scanf("%f",&km);
	km=cm*1000*100;
	km=1000*m;
	km=3280*ft;
	km=39370*in;
	printf("distance in metere=%f\n",m);
	printf("distance in centimetere=%f\n",cm);
	printf("distance in feet=%f\n",ft);
	printf("distance in inch=%f\n",in);
	return 0;
}
