#include<stdio.h>
int main()
{
	float da,hra,ifix,lr,itax,grpay,bp;
	printf("\nEnter Basic Salary: ");
	scanf("%f",&bp);
	da=0.3*bp;
	hra=0.185*bp;
	itax=10000;
	lr=0.06*bp;
	ifix=5000;
	grpay=da+hra+ifix+itax+lr;
	printf("Basic Salary=%f\n",bp);
	printf("\nDA=%f",da);
	printf("\nHRA=%f",hra);
	printf("\nIntensive Fix=%f",ifix);
	printf("\nLoan Reduction=%f",lr);
	printf("\nIncome Tax=%f",itax);
	printf("\nGross Pay=%f",grpay);
	return 0;
}
