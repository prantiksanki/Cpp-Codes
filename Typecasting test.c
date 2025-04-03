#include <stdio.h>
int main ()
{
	float c ;
	int a =3 , b= 2 ;
	c = (float) (a/b); 
	printf ("\n#1  c= (float)(a/b) ::  %f",c);
	
	
	float d  ;
	d = a/b ;
	printf ("\n#2  d= a/b          ::  %f",d);
	
	float e ;
	e = (float) a/b ;
	printf ("\n#3  e= float (a/b)  ::  %f",e);
	
}
