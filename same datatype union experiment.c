#include <stdio.h>
union book 
{
	int page ;
	int price ;
	
} ;

int main ()
{
	union book c  ;
	printf ("Enter the No of Pages :: Price :::  ");
	
	scanf ("%d %d",&c.page ,&c.price);
	
	printf ("\n\n\n:::This is what you entered :::") ;
    printf ("\nPages : %d     ||    Price : %d  ",c.page , c.price);
    
}
