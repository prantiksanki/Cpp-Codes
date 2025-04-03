// Find no of terms in a string;

#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];  
    int i,words=0;
    printf("Enter  the string : ");
    gets(s);
    for(i=0;s[i];i++)  
    
 	if(i>0)
	 {
	 words++;
 }
 	 printf("no of character in string = %d\n",words+1);
    return 0;
}
