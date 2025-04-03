#include <stdio.h>

int main() 
{
    FILE *file;

    file = fopen("example.txt", "w");

    if (file == NULL) {
        printf("Error opening the file for writing!\n");
        return 1;
    }

    fprintf(file, "This is a formatted string: %s\n", "Hello, World!");

    fclose(file);

    file = fopen("example.txt", "r");

    if (file == NULL) {
        printf("Error opening the file for reading!\n");
        return 1; 
    }
    else 
    {
         char str [100];
         file = fopen ("example.txt" , "r");
        while (fgets(str , sizeof(str) , file) != NULL)
         {
         	printf ("%s" ,str) ;
		 }
	}

    fclose(file);

    return 0; 
}

