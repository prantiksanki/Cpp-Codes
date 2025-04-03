#include <stdio.h>
#include <stdlib.h>

int main()  
  {
  	
    int *dynamicArray;
    int i;

     dynamicArray = (int *)malloc(5 * sizeof(int));


     printf("Enter the Array elements: ");
    for (i = 0; i < 5; ++i) 
    
	{
        scanf("%d", &dynamicArray[i]);
    }

    printf("Original array elements: ");
    for (i = 0; i < 5; ++i)
	
	 {
        printf("%d ", dynamicArray[i]);
    }

     dynamicArray = (int *)realloc(dynamicArray, 8 * sizeof(int));


     printf("\nEnter 3 more Array elements: ");
     
    for (i = 5; i < 8; ++i)
	
    {
        scanf("%d", &dynamicArray[i]);
    }

     printf("Resized array elements: ");
    for (i = 0; i < 8; ++i) 
	{
        printf("%d ", dynamicArray[i]);
    }

     free(dynamicArray);

    return 0;
}

