/*calculate Ramesh's gross salary*/
#include<stdio.h>
int main ()
{
float grpay,bp,hra,da;
	printf("\nEnter Basic Salary Of Ramesh:");
	scanf("%f",&bp);
	da=0.4*bp;
	hra=0.2*bp;
	grpay=bp+hra+da;
	printf("Basic Salary of Ramesh=%f\n",bp);
	printf("Dearness Allowance=%f\n,",da);
	printf("House Rent Allowance=%f\n,",hra);
	printf("Gross Pay of Ramesh is %f\n",grpay);
	return 0;
}
