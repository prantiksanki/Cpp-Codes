#include<stdio.h>
int main ()
{
	float a,b,c;
	float bjp,congress,tmc;
	int ch;
	/* a= bjp, b= congress, c= tmc*/
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Vote for bjp");
			break;
			case 2 :
				printf("Vote for congress");
				break;
				case 3:
					printf("Vote for tmc");
					break;
					default:
						printf("input is wrong");
	}
	return 0;
}
