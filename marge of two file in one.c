#include <stdio.h>
int main ()
{
	FILE *file1 , *file2 , *file3 ;
	int count =0 ;
	file1 = fopen ("example.txt" , "r");
	file2 = fopen ("address.txt" , "r");
	
	file3 = fopen ("marge.txt" , "w");
	
	char ch1 = getc (file1) ;
	char ch2 = getc (file2);
	
	while (ch1 != EOF)
	{
		putc (ch1 , file3);
		ch1 = getc (file1);
	}
	
	
	while (ch2 != EOF)
	{
		putc (ch2 , file3);
		ch2 = getc (file2);
	}
	
	
	fclose (file1);
	fclose (file2);
	fclose (file3);
	
	
	printf ("\n:::::::The Marged File is :::::::    \n\n\n\n");
	file3 = fopen ("marge.txt" , "r");
	char ch = getc (file3);
	while (ch != EOF)
	{
		printf ("%c",ch);
		ch = getc (file3);
		count ++ ;
	}
	printf ("\n\n\n\nThe length of this statement is : %d", count);
	
	fclose (file3);
}
