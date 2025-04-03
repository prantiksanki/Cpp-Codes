#include<stdio.h>
int main ()

{
	char str[50] ;
	printf ("Enter a string : ");
	gets (str) ;
	
	printf ("The Lower form of this string is : %s ",strlwr(str)) ;
	
}
