#include <stdio.h>
int main ()
{
	FILE *file1 , *file2  ;
	int temp = 0 ;
	file1 = fopen ("C:/Users/Prantik sanki/OneDrive/Desktop/MY C CODE/example.txt" ,  "r" );
	char ch  ;
	ch = fgetc (file1);
	while (ch != EOF)
	{
		printf ("%c",ch);
		ch= fgetc (file1);
	}
	
	fclose (file1);
	//rewind (file1) ;
	
	file1 = fopen ("C:/Users/Prantik sanki/OneDrive/Desktop/MY C CODE/example.txt" ,  "r" );
	file2 = fopen ("copy_code.txt" , "w");
	rewind (file1) ;
	int dlt ;
	printf ("\n\nEnter the line , you want to delete :   ");
	scanf ("%d",&dlt) ;
	
	ch = fgetc (file1);
	while (ch != EOF)
	{
		//ch = fgetc(file1);
		if (ch == '\n')
		{
			temp++ ;
		}
		
		if (temp != dlt)
		{
			putc(ch , file2);
		}
		ch = fgetc(file1);
	}
	
	fclose (file1);
	fclose (file2) ;
	
	file2 = fopen("copy_code.txt" , "r");

	ch = fgetc(file2);
	
	printf ("\nModified Text file is : \n");
	while (ch != EOF)
	{
		printf ("%c" , ch) ;
		ch = fgetc (file2);
	}
	fclose (file2) ;
	
}
