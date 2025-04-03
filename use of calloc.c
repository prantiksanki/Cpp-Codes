#include <stdio.h>
#include <stdlib.h>

int main() 
{
     int *dynamicArray;
     int i ;
     dynamicArray = (int *)calloc(5, sizeof(int));
     
     printf ("Enter the array elements :  ");
     
     for (i=0 ; i<5 ; i++)
     {
     	scanf ("%d",&dynamicArray[i] );
	 }

     printf("Array elements: ");
    for ( i = 0; i < 5; ++i)
   {
        printf("%d ", dynamicArray[i]);
    }
    
    printf ("\nSize of int : %d",sizeof(int)) ;
    
    printf ("\nSize of dynamicArray : %d", sizeof(dynamicArray));
     free(dynamicArray);

    return 0;  
}

