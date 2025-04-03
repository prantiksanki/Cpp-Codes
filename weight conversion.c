#include <stdio.h>
int main ()
{
	int kg ;
	int gm ;
	float pound , ton;
	printf ("Enter the weight in kg : ");
	scanf ("%d",&kg);
	
	 weight(kg, &gm ,&ton ,&pound);
	printf ("Weight in gm , ton , pound is   %d    %f      %f:  ",gm ,ton ,pound);
	
}

int weight (int kg , int *gm , float*ton , float*pound)
{
	 *gm = kg * 1000 ;
	 *ton = kg / 1000 ;
	 *pound = kg * 2.20462;
	
	
}
