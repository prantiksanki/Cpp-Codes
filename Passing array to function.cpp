#include<stdio.h>
void disp(char ch)
{
	printf ("%c\t",ch);
} 
int main ()
{
	char arr [] = {'a','b','c','d','e','f','g','h'};
	for (int x=0; x<9 ; x++)
	{
		disp (arr[x]);  // Function declaration
	} 
	return 0;
}
