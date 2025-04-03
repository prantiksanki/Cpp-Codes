#include <stdio.h>
int main ()
{
	int n; 
	printf ("Enter the no of book you want to enter :  ");
	scanf ("%d",&n);
	
	
	struct book 
	{
		char name[50];
		int pages ;
		float price ;
	};
	
	struct book bk[n];
	
	printf ("\nEnter the details of %d books ::  ",n);
	
	int i ;
	
	for (i=0 ; i<n ; i++)
	{
	   printf ("\nBOOK NO :%d ----------- Name :: Pages :: Price :   ",i+1);
	   scanf ("%s %d %f",bk[i].name ,&bk[i].pages ,&bk[i].price);
	} 
	
	printf ("\n\n\t\t\t\t:::This is what you entered  :::   ");
	
	for (i=0 ; i<n ; i++)
	{
		printf ("\n\t\t\t\tName : %s  ||  Pages : %d  ||  Price : %f  ",bk[i].name ,bk[i].pages ,bk[i].price);
	}
	
	
}
