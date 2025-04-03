#include <stdio.h>
int main ()
{
	FILE*ptr ;
	ptr = fopen ("address.txt" , "w");
    char str[50] = "I am a disco dancer" ;
    fprintf (ptr , "%s" , str) ;
    fclose (ptr) ;
    
    
    ptr = fopen ("address.txt" , "r");
    char ch = fgetc(ptr) ;
    while(ch != EOF)
    {
    	printf ("%c" , ch);
    	ch = fgetc(ptr) ;
	}
	fclose (ptr) ;
}
