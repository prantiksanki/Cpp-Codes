#include <stdio.h>
#include<string.h>
int main ()
{
	char a[30]="Hello" ; 
	char b[30]="World" ;
    printf ("a before : %s",a);
	strcat (a,b);
	printf ("\na after : %s\t",a);
	return 0; 	
}
