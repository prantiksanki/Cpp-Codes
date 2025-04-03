#include<stdio.h>
int main ()
{
	char ch;
	printf("Lower case Character : ");
	scanf("%c",&ch);
	int A=ch;
	A=A-32;
	printf("%c",A);
	return 0;
}
