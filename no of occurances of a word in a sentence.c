#include<stdio.h>
int main ()
{
	int str[100];
	int i,n;
	char ch;
	int count = 0;
	printf ("Enter the statement : ");
	gets (str);
	printf ("\nEnter the character you want to find : ");
	scanf ("%s",n);
	int s = strlen(str);
	printf ("string : %s\n",str);
	printf ("%d\n",s);
	for (i=0;i<s;i++)
	{
		if (ch ==str[n]) 
		{
			count++ ;
		} else 
		{
			printf (" ");
		}
		
	} 
	printf ("The no of occurances of %c is :%d",count);
	return count;
}
