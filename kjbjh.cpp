#include<stdio.h>
int main ()
{
	int a,b;
	for (a=1;a<=3;a++){
		for (b=1;b<=a;b++){
			printf ("%d",b);
		}
	}
	return 0;
}
