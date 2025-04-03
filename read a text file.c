#include<stdio.h>
int main ()
{
	FILE *ptr ;
	ptr = fopen ("C:/Users/Prantik sanki/OneDrive/Desktop/MY C CODE/address.txt", "w");
	
	char str1[50];
	printf ("Enter a line :  ");
	gets (str1);
	fprintf (ptr , "Statement : %s ", str1);
	fclose (ptr) ;
	
	ptr = fopen ("C:/Users/Prantik sanki/OneDrive/Desktop/MY C CODE/address.txt" , "r");
	
	
	char str[200];
	
	
	while (fgets(str, sizeof(str), ptr) != NULL)
	 {
        printf("%s", str);
    }
	fclose (ptr);
}
