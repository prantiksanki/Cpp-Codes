#include<stdio.h>
int main()
{
	int noc;
	float callrate;
	printf("Enter noc: ");
	scanf("%d",&noc);
	if(noc<100){
		printf("Call Rate is Free");
	} else if (100<noc && noc<=200) {
		callrate = (noc-100)*1;
		printf("%d",callrate);
	} else if (200<noc && noc<=300){
		callrate=(noc-100)*2;
		printf("%d",callrate);
	} else if (300<noc && noc<=400){
		callrate=(noc-100)*3;
		printf("%d",callrate);
	} else (noc>400) ;{
		callrate=(noc-100)*4;
		printf("%d",callrate);
	}
	printf("\nThe Final Bill=%d",callrate);
	return 0;
}
