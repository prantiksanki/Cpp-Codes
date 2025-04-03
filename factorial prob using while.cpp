#include<stdio.h>
int main ()
{
	int n;
	printf ("Enter the value of n : ");
	scanf("%d",&n);
    int mult =1 ;
    int i ;
    
    for (i=n ; i>0 ; i--)
    {
    	
          mult = mult * i ;
	}
	
	printf ("The factorial of %d is : %d ",n , mult) ;
	
}
