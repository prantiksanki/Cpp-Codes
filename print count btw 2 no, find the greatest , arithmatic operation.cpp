#include<stdio.h>
int count (int,int);
int gtno(int , int);
int arithopr(int , int);
int main ()
{
	int a,b;
	printf ("Enter the value of a: ");
	scanf ("%d",&a);
	printf ("Enter the value of b : ");
	scanf ("%d",&b);
	int s = count ( a,  b);
    int t =	gtno ( a,  b);
	int u = arithopr ( a , b);
}
count (int p , int q)
{
		int i;
		printf ("The nos between these two nos are : ");
	for (i=p;i<=q;i++) 
	{
		printf (" %d\t",i);
	} 
	return 0;
	
}
gtno (int a, int b)
{
		
	if (a>b)
	{
		printf ("\na is the biggest no");
	} else {
		printf ("\nb is the biggest no");
	}
	return 0;
}
arithopr (int t, int x)
{ 
	int z = t+x;
	printf ("\nThe sum of these values : %d",z);
	int v = t-x;
	printf ("\nThe substraction of these values : %d",v);
	int y = t*x;
	printf ("\nThe multiplication of these values : %d",y);
    int	m=t/x;
	printf ("\nThe division of these values : %d",m);
	return 0;
}
 


