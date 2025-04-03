#include <stdio.h>

int main()

 {
    FILE *file;
    int count;

    file = fopen("address.txt", "r");

        fscanf(file, "%d", &count);
        count++ ;
        fclose(file);
    
    

   printf("This program has been executed %d times.\n", count);



    file = fopen("address.txt", "w");

    fprintf(file, "%d", count);


    fclose(file);
    
   

    return 0;
}

