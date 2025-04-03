#include <stdio.h>
struct conversion 
{
     float cm ;
     float m ;
     float ml ;
     float  l ;
};

struct conversion b1 , b2 , b3  ;

int main ()
{
	printf ("\nEnter the measurement in cm of b1 : ");
	scanf ("%f",&b1.cm );
	printf ("\nEnter the measurement in cm of b2 : ");
	scanf ("%f",&b2.cm);
	printf ("\nEnter the masurement in cm of b3 :  ");
	scanf ("%f",&b3.cm);
	
	b1.m = (b1.cm)/100 ;
	b2.m = (b2.cm)/100 ;
	b3.m = (b3.cm)/100 ;
	
	printf ("\nThe Conversion of cm to m of b1 : %f ",b1.m);
	printf ("\nThe conversion of cm to m of b2 : %f",b2.m);
	printf ("\nThe conversion of cm to m of b3 : %f",b3.m);
	
	
	printf ("\nEnter the measurement in ml of b1 : ");
	scanf ("%f",&b1.ml );
	printf ("\nEnter the measurement in ml of b2 : ");
	scanf ("%f",&b2.ml);
	printf ("\nEnter the masurement in ml of b3 :  ");
	scanf ("%f",&b3.ml);
	
	b1.l = (b1.ml)/1000 ;
	b2.l = (b2.ml)/1000 ;
	b3.l = (b3.ml)/1000 ;
	
	printf ("\nThe Conversion of ml to liter of b1 : %f ",b1.l);
	printf ("\nThe conversion of ml to liter of b2 : %f",b2.l);
	printf ("\nThe conversion of ml to liter of b3 : %f",b3.l);
	
	
}

