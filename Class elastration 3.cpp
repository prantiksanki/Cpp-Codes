#include<stdio.h>
int main()
{
	int NOC;
	float CallRate;
	printf("Enter NOC: ");
	scanf("%d",&NOC);
	if(NOC<100){
		printf("Call Rate is Free");
	} else if (100<NOC && NOC<=200) {
		CallRate = (NOC-100)*1;
		printf("%d",CallRate);
	} else if (200<NOC && NOC<=300){
		CallRate=(NOC-100)*2;
		printf("%d",CallRate);
	} else if (300<NOC && NOC<=400){
		CallRate=(NOC-100)*3;
		printf("%d",CallRate);
	} else (NOC>400) ;{
		CallRate=(NOC-100)*4;
		printf("%d",CallRate);
	}
	printf("\nThe Final Bill=%d",CallRate);
	return 0;
}
