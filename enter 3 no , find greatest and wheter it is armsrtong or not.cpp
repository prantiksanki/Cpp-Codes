#include<stdio.h>
int armstrong (int);
int main ()
{
	int a,b,c,j;
	printf ("Enter the value of a : ");
	scanf ("%d",&a);
	printf ("Enter the value of b : ");
	scanf ("%d",&b);
	printf ("Enter the value of c : ");
	scanf ("%d",&c);
	if (a>b && a>c)
	{
		printf ("a is the greatest no.");
		 j = a ;
	} else if (b>a && b>c)
	{
		printf ("b is the greatest no.");
	   	j=b;
	} else if (c>a && c>b)
	{
		printf ("c is the greatest no.");
	   	j=c;
	} 
	  printf ("\nThe greatest no is : %d",j);
	  int h = armstrong (j);
	  printf ("%d",h);
	return j;
}

    armstrong (int j)
{
     int sum =0 ,n; 
	 for (n=j;n>0;j=j/10)
	 { 
	 int rem = j%10;
	 sum = sum + (rem*rem*rem);
	 if (rem == j)
	 {
	 	printf ("It is armstrong no.");
	 } else
	 {
	 	printf ("It is not an armstrong no.");
	 }
	 }
	 return 0;	
}
	
