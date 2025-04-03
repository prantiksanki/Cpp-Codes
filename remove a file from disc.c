#include <stdio.h>

int main() 
{
   
    int h = remove("C:/Users/Prantik sanki/OneDrive/Desktop/MY C CODE/output_method1.txt") ;
    // Attempt to remove the file
    if (h == 0) {
        printf("The file has been successfully removed.\n");
    } else {
        perror("Error removing file");
    }

    return 0;
}

