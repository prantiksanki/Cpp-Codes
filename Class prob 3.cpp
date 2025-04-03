#include <stdio.h>

int main()
{
    char ch;
    printf("Enter Uppercase Char: ");
    scanf("%c",&ch);
    int a = ch;
    a = a+32;
    printf("%c",a);
}
