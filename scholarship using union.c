#include <stdio.h>
#include <string.h>
int main ()
{
	union scholarship 
       {
       	char course[100];
       	float perc ;
       	
	   };
	   union scholarship emp1 ,emp2 ;
	   
//	strcpy(emp1.course, "Btech cse");
    emp1.course == "Btech cse";
    emp1.perc = 90;
   // strcpy(emp2.course, "Bsc geology");
   emp2.course == "Bsc geology";
    emp2.perc = 80;
	   
	   float c ;
	   c=(emp1.perc + emp2.perc)/2.0 ;
	   if (c>=85.0)
	   {
	   	printf ("Students are eligible for scholarship");
	   }
	   else {
	   	printf ("Students are not eligible for scholarship");
	   }
}
