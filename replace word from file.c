#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 1000

int main() {
    FILE *file;
    char filename[] = "address.txt";   
    char searchWord[] = "Vaidik";
    char replaceWord[] = "Vaidik Jain";

    file = fopen(filename, "r");

    char buffer[MAX_SIZE];
    size_t file_size;

    fseek(file, 0, SEEK_END);
    file_size = ftell(file);
    rewind(file);

    if (file_size > MAX_SIZE) 
	{
        printf("File size exceeds the buffer limit.\n");
        fclose(file);
        return 1;
    }

    fread(buffer, 1, file_size, file);
    fclose(file);
    int i ;

    // Find and replace the word
    char *ptr = strstr(buffer, searchWord);
    while (ptr != NULL) {
        // Replace the word manually
        for (i = 0; i < strlen(replaceWord); i++) {
            *(ptr + i) = replaceWord[i];
        }
        ptr = strstr(ptr + strlen(replaceWord), searchWord);
    }

    // Write the modified content back to the file
    file = fopen(filename, "w");

   
   

    fwrite(buffer, 1, file_size, file);
    fclose(file);

    printf("Word '%s' replaced with '%s' in file %s.\n", searchWord, replaceWord, filename);

    return 0;
}

