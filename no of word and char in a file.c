#include <stdio.h>
int main ()
{
	FILE *file ;
	int word=0 , character =0 ;
	file = fopen ("example.txt" ,"r");
	char ch =getc(file) ;
/*	printf ("\nThe content inside this file is :::  \n");
	
	while (ch != EOF)
	{
		printf ("%c",ch);
		ch = getc (file);
	}
	
	ch = getc(file);*/
	while (ch != EOF)
	{
		
		if (ch == ' ' || ch == '\n')
		{
			word++ ;
		}
		
		else 
		{
			character++ ;
		}
		
		ch = getc (file) ; 
	}
	
	if (ch != ' ' && ch != '\n') 
	{
        word++;
    }
	
	printf ("\nThe total no of word is : %d ",word);
	printf ("\nThe total no of character is : %d",character);
	
	fclose (file);
}
