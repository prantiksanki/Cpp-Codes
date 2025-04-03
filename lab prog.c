#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int i;
    printf("The original array is: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }

    sum(arr);
    swap(arr);
    factorial(arr);
}

int sum(int arr[5])
{
    int i;
    int sum = 0;
    for (i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }

    printf("\nThe sum of array elements is: %d", sum);

}

int swap(int arr[5])
{
    int i;
    int temp;
    temp = arr[0];
    arr[0] = arr[4];
    arr[4] = temp;

    printf("\nAfter swapping the 1st and last elements, the array is: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }
}

int factorial(int arr[5])
{
    int i;
    int mult = 1;
        for (i = 1; i <= arr[2]; i++)
        {
            mult = mult * i;
        }
        printf("\nThe factorial of the 3rd number is: %d\n", mult);

}

