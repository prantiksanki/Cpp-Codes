#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 4, 6, 7, 8, 6};
    int i, j;

    printf("The unique elements are: ");

    for (i = 0; i < 9; i++)
    {
        int isUnique = 1;
        for (j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                isUnique = 0; 
                break; 
            }
        }

        if (isUnique)
        {
            printf("%d\t", arr[i]);
        }
    }

    return 0;
}

