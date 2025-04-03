#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter a,b,c : ");
	scanf("%d %d %d", &a, &b ,&c);
	d=b*b-(4*a*c);
	if (d<0) {
		printf("Roots are Imaginary");
	} else if (d>0) {
		printf("Roots are Real");
	}else if (d==0){
		printf("Roots are Same");
	}
	return 0;
}
