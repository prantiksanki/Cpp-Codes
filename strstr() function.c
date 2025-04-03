#include <stdio.h>
#include<string.h>
int main ()
{
    char str1[100] = "Hello , my name is prantik sanki . And my mother name is Khelna Sanki";
    char str2[100] = "is";
	printf ("%s",strstr(str1 , str2)) ;
//	printf ("%s",strrstr(str1 , "sanki"));
}
