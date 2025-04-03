#include<stdio.h>
int leap(int );
int main ()
{
	 int year;
	 printf ("Enter a year : ");
	 scanf ("%d",&year);
	 int h = leap (year);
	 return 0;
} 
leap ( int x)
{
	if (x%4==0)
	{
		printf ("It is leap year");
	} else 
	{
		printf ("It is not leap year");
	}
	return 0;
}
