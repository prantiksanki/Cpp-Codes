#include <stdio.h>
int main ()
{
	int arr[3][3]={1,2,3,4,5,6,7,8,9};
    arr[0][0] = 100 ;
    int x = arr[3][4];
    printf ("%d",x);
}
