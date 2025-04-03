#include<stdio.h>
int main ()
{
	struct book 
	{
		char name[50];
		float price ;
		int pages ;
		
	} ;
	struct book b1,b2,b3 ;
	
	printf ("Enter the name , price , pages of 1st book : ");
	scanf ("%s %f %d",b1.name ,&b1.price ,&b1.pages );
	printf ("Enter the name , price , pages of 2nd book : ");
	scanf ("%s %f %d",b2.name,&b2.price ,&b2.pages );
	printf ("Enter the name , price , pages of 3rd book : ");
	scanf ("%s %f %d",b3.name ,&b3.price ,&b3.pages );
	
	
	printf ("This is the details of these 3 books :  ");
	
	printf ("\nName : %s   ; Price : %f   ; Pages : %d  ",b1.name , b1.price ,b1.pages);
	printf ("\nName : %s   ; Price : %f   ; Pages : %d  ",b2.name , b2.price ,b2.pages);
	printf ("\nName : %s   ; Price : %f   ; Pages : %d  ",b3.name , b3.price ,b3.pages);	
	
//	printf ("\nSize of this structure is : %d ",sizeof( book));
}
