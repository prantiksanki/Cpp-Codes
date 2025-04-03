#include <stdio.h>
#include <string.h>
int main ()
{
	char name[3];
	float price[3];
	int pages[3];
	int i ;
	
	printf ("Enter names , prices , and no of pages of these 3 books :  ");
	for (i=0 ; i<3 ; i++)
	{
		printf ("\nname  price  pages of book %d :   ",i+1);
		scanf ("%s %f %d",&name[i],&price[i],&pages[i]);
	}
	printf ("\nAnd this is what you print : ");
	for (i=0 ; i<3 ; i++)
	{
		printf("%s %f %d\n",name[i],price[i],pages[i]);
	}

}
