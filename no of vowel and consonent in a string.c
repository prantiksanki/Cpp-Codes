#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main ()
{
	char str[100];
	int vowel =0 , consonent= 0 ;
	printf ("Enter a string :  ");
	gets (str);
//	char c = tolower(str[]);
	int i ;
	for (i=0 ; str[i]!='\0';i++)
	{
		char c = (str[i]);
		if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
		{
			vowel++ ;
		}
		else if (c >= 'a' && c<= 'z')
		{
			consonent++ ;
		}
		
	}
	
	printf ("The total no of vowel is : %d",vowel);
	
	printf ("\nThe total no of consonent is : %d",consonent);
}
