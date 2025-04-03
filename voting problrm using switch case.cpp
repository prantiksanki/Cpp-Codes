#include <stdio.h>
int main ()
{
	int i=0,j=0;
	printf ("Press 1 - BJP ");
	printf ("Press 2 - TMC ");
	int ch ; 
	scanf ("%d",&ch);
	int sum =0;
	switch (ch)
	{ case -1 :
		i++;
		printf ("Vote for bjp");
		break;
		case -2 :
			j++;
			printf ("Vote for TMC.");
			break;
			default :
				printf ("Invalid Input");
				
	} 
return 0;
}
