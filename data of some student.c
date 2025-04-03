#include <stdio.h>
int main ()
{
	struct class 
	{
		char name;
		int class ;
		float perct ;
	};
	struct class stud[10];
	
	int i ;
	printf ("Enter the name , class and percent in c :  ");
	for (i=0 ; i<10 ; i++)
	{
		scanf ("%c %d %f",&stud[i].name ,&stud[i].class ,&stud[i].perct);
	}
	
	float min = stud[0].perct;
	for(i=0 ;i<10 ; i++)
	{
		if (min < stud[i].perct)
		{
			min = stud[i].perct;
			
		}
		printf ("The minimum percentage is :%f",min);
		
	}
    
}
