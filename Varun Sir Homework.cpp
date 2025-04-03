#include<stdio.h>
int main ()
{
	float bp; float da; float hra; float lr; float grpay; float itax; float ifix;
	printf("\nEnter Basic Salary: ");
	scanf("%f",&bp);
	da=0.3*bp;
	hra=0.185*bp;
	lr=0.06*bp;
	ifix=5000;
	itax=10000;
	grpay=da+hra+lr+ifix+itax;
	printf("Basic Salary=%f\n",bp);
	printf("Dareness Allowance=%f\n",da);
	printf("House Rent Allowance=%f\n",hra);
	printf("Insentive Fixed=%f\n",ifix);
	printf("Loan Reduction=%f\n",lr);
	printf("Income Tax=%f\n",itax);
	printf("Gross Pay=%f\n",grpay);
	return 0;
}
