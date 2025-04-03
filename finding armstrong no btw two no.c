#include<stdio.h>
#include<math.h>
int main ()
{
	int n,i,j;
	int rem , count=0 ;
	int sum = 0 ;
	printf ("Enter the range : ");
	scanf ("%d",&n);
	printf ("The armstrong nos between 1 and %d is : ",n);
    for (i=1;i<=n;i++)
    {
    	i=j ;
    	while(j!=0)
    	{
    		j=j/10 ;
    		count ++ ;
		} 
		sum = pow(j % 10, count)+ pow((j % 100 - j % 10) / 10, count)+ pow((j % 1000 - j % 100) / 100, count);

    }
    if ( sum == j )
{
   printf ("%d",j);	
}
    return 0;
}
