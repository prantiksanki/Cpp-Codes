#include <stdio.h> ;
int main () 
{
	int a , b ;
	printf ("Enter two nos :   ");
	
	;
	
	;
	scanf ("%d %d",&a ,&b);
	int h = sum (a,b); 
    //int q = multiple(a,b);
	printf ("\nThe sum is : %d",h);
	//printf ("\nThe multiplication is : %d",q)
}
sum (int x , int y )
{
	int z = x+y ;
	int t = 8 ;
	int h = multiple (x,y);
	printf ("The product of these 2 no is  : %d",h);
	return z ;
	//int p= multiple(x,y);
	//printf ("The multiplication of these two no is : %d",p);
}
multiple (int r , int s)
{
	int q = r*s ;
    return q ;
}
