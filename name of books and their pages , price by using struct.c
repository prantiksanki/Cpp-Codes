#include <stdio.h>
int main ()
{
	struct book 
	{
		char name ;
		float price ;
		int pages ;
	};
	
	struct book b1 , b2 , b3 ;
	printf ("\nEnter names , price and pages of 1st book : ");
	scanf ("%c %f %d", &b1.name , &b1.price , &b1.pages );
	printf ("\nEnter names , price and pages of 2nd book : ");
	scanf (" %c %f %d", &b2.name , &b2.price , &b2.pages );
	printf ("\nEnter names , price and pages of 3rd book : ");
	scanf ("%c %f %d", &b3.name , &b3.price , &b3.pages );
	


	printf ("\nAnd this is what you entered :  \n");
	printf ("\n %c %f %d ",b1.name , b1.price , b1.pages);
	printf ("\n %c %f %d ",b2.name , b2.price , b2.pages);
	printf ("\n %c %f %d ",b3.name , b3.price , b3.pages);
	return 0 ;
}
