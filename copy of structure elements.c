#include <stdio.h>
#include <string.h>
struct copy 
{
	char name[50];
	int age  ;
};
struct copy a,b,c ;

int main ()
{
	//struct copy ;
	printf ("Enter the name of a : ");
	scanf ("%s",a.name);
	printf ("Enter the age of b :  ");
	scanf ("%d",&a.age);
	
	strcpy (b.name , a.name);
	b.age = a.age ;
	
	c=b ;
	
	printf ("\nThe age of %s is %d",a.name , a.age);
	printf ("\nThe age of %s is %d",b.name , b.age);
	printf ("\nThe age of %s is %d",c.name , c.age);
}
