#include<stdio.h>
int main()
{
	int sp,cp,profit,loss;
	printf("Enter the value of selling price : ");
	scanf("%d",&sp);
	printf("Enter the vlue of cost price : ");
	scanf("%d",&cp);
	if (sp>cp){
		profit = sp-cp;
		printf("The profit is =%d",profit);
	} else {
		loss=cp-sp;
		printf("The loss is =%d",loss);
	}
	return 0;
}
