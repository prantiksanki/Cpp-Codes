#include <stdio.h>
int main ()
{
	int i ;
	struct book 
	{
		char name ;
		float price;
		int page;
	};
	struct book b[10] ;
	
	printf ("Enter the name , price and pages :  ");
	for (i=0 ; i<10 ; i++)
	{
		scanf ("%s %f %d",&b[i].name ,&b[i].price ,&b[i].page);
	}
	printf ("This is what you entered : ");
	for (i=0 ; i<10 ; i++)
	{
		printf (" \n %s %f %d",b[i].name , b[i].price ,b[i].page);
	}
}
