#include <stdio.h>
int main ()
{
	struct book 
	{
		char name;
		float price ;
		int pages ;
	};
	struct book b1,b2,b3 ;
	printf ("Enter the name , price , pages :  ");
	scanf ("%s %f %d",&b1.name ,&b1.price ,&b1.pages );
	scanf ("%s %f %d",&b2.name ,&b2.price ,&b2.pages );
	scanf ("%s %f %d",&b3.name ,&b3.price ,&b3.pages );
	
	printf ("what you entered :");
	
	printf ("%s %f %d",b1.name  , b1.price , b1.pages);
	printf ("%s %f %d",b2.name , b2.price , b2.pages);
	printf ("%s %f %d",b3.name , b3.price , b3.pages);
	
}

