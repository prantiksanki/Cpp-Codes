#include<stdio.h>
int main ()
{
	int arr[5] ;
	printf ("Enter the 5 nos : ");
	int i ;
	for (i=0 ; i<5 ; i++)
	{
		scanf ("%d",&arr[i]);
	}
	
	
	avarage(arr);
}

int avarage (int arr[5])
{
	int i  ;
	int sum = 0 ;
	
	for (i=0 ; i<5 ; i++)
	{
		sum =sum + arr[i] ;
	}
	
	int avg = sum / 5 ;
	
	printf ("The Avarage of these 5 nos is : %d",avg );
	
}
