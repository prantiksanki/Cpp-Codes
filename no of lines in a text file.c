#include <stdio.h>

int main()
{
    FILE *file;
    char ch;
    int lines = 0;




    file = fopen("address.txt", "r");

    while ((ch = fgetc(file)) != EOF) 
	{
        if (ch == '\n')
	    {
            lines++ ;
        }
    }


    fclose(file);


    printf("Number of lines in the file address.txt is : %d\n", lines+1);

    return 0; 
}

