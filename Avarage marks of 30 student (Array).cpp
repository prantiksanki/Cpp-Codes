#include <stdio.h>
int main ()
{
	int n,i, sum=0;
	int avg;
	int marks[10];
	for (i=0;i<=9;i++)
	{
		printf ("Enter the marks[%d] : ",i);
		scanf ("%d",&marks[i]);
	} 
	for (i=0;i<=9;i++)
	    sum= sum + marks[i];
	    avg = sum/10;
	    printf ("%d", avg); 
	    return 0;
}
