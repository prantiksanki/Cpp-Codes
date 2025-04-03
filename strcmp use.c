#include <stdio.h>
#include <string.h>
  
int main()
{
char str1[] = "hello";
char str2[] = "hello";  
int result1 = strcmp(str1, str2);
printf("Comparison of str1 and str2: %d\n", result1);
return 0;
}

