#include <stdio.h>

int main() 
{
    FILE *fileptr;

    
    fileptr = fopen("paragraph.txt", "w");
    

    char str[50] = "Hello my name is Prantik Sanki";
    fputs(str, fileptr);

    fclose(fileptr); 

    
    fileptr = fopen("paragraph.txt", "r");
    int count = 0 ;
    

    while (fgets(str, 50, fileptr) != NULL)
	 {
        printf("%s",str);
    }
    
    int i ;
    for(i=0 ; str[i] != '\0' ; i++)
    {
    	count ++ ;
    	
	}
    
    printf ("\nThe Length of this paragraph is : %d ",count);
    fclose(fileptr); 

    return 0;
}

