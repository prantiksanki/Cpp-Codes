#include<stdio.h>
int main ()
{
	int n ;
	printf ("Enter no of terms : ");
	scanf ("%d",&n);
	int  i;
	int h = series(n);
	//for (i=1 ; i<=n ; i++)
//	{
	
	printf ("The series is : %d",h);
//}
}

int series (int n )
{
	int i ;
	
	for (i=1 ; i<=n ; i++ )
	{
	
	
    if (i=1)
    {
    	return 1 ;
	}
	else 
	{
		return 1 * series(i+2);
	}
    }
}
