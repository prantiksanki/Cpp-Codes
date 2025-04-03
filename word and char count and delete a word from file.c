#include <stdio.h>

int main()

 {
    FILE *file = fopen("example.txt", "r");


    int wcount, ccount;
    
    
    countWordsAndCharacters(file, &wcount, &ccount);

    printf("Number of words: %d\n", wcount);
    printf("Number of characters: %d\n", ccount);

    
    fclose(file);
    file = fopen("example.txt", "r");

    
    char dltchar = 'a';
    deleteChar(file, dltchar);

    printf("Character '%c' deleted from the file.\n", dltchar);

    return 0;
}

//-----------------------------------------------------------------------------------------

void countWordsAndCharacters(FILE *file, int *wordCount, int *charCount) {
    char ch;
    *wordCount = 0;
    *charCount = 0;

    while ((ch = fgetc(file)) != EOF) {
        (*charCount)++;


        if (ch == ' ' || ch == '\n' || ch == '\t') {
            (*wordCount)++;
        }
    }
    if (*charCount > 0) {
        (*wordCount)++;
    }
}

//----------------------------------------------------------------------------------------
void deleteChar(FILE *file, char target) {
    FILE *tempFile = fopen("temp.txt", "w");

    if (tempFile == NULL) {
        printf("Error creating temporary file.");
        return;
    }

    char ch;
    while ((ch = fgetc(file)) != EOF) {

        if (ch != target) {
            fputc(ch, tempFile);
        }
    }

    fclose(file);
    fclose(tempFile);


    remove("example.txt");


    rename("temp.txt", "example.txt");
    
    
}


