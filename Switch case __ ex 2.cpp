#include<stdio.h>
int main()
{
	int a=80,b=60,c=70,d=100,e=95;
	int percent, sum ;
	int ch;
	scanf("%d",&ch);
    sum=(a+b+c+d+e);
    percent=(sum*100)/500;
    switch(ch)
	{
    	case 1:
    		printf("Sum of the numbers=%d",sum);
    		break;
    		case 2:
    			printf("Percent of the numbers = %d",percent);
    			break;
    			default:
    				printf("Invalid input");
	}
	return 0 ;
}
