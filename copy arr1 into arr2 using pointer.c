#include<stdio.h>
int main()
{
    int arr1[]={1,2,3,4,5,6,7};
    int arr2[7];
    int i;
    int *p1=arr1;
    int *p2=arr2;
    for(i=0;i<7;i++)
    {
        *(p2+i)=*(p1+i);
    }
    printf("array 1: ");
    for(i=0;i<7;i++)
    {
        printf("%d ,",*(p1+i));
    }
    printf("\n");
    printf("array 2: ");
    for(i=0;i<7;i++)
    {
        printf("%d ,",*(p2+i));
    }
    return 0;

}

