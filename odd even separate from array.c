#include <stdio.h>
int main ()
{
	int n ;
	int arr1[10],arr2[10],arr3[10] ;
	
	int i,j,k; 
	printf ("Enter the array elements");
	for (i=0 ; i<10 ; i++)
	{
		scanf ("%d",&arr1[i]);
	}
	
	for (i=0 ; i<10 ; i++)
	{
		if (arr1[i]%2 == 0 )
		{
			arr2[j]=arr1[i];
			j++ ;
		}
		else 
		{
			arr3[k] = arr1[i] ;
			k++ ;
		}
	}
	
	printf ("\nThe even elements are :  ");
	
	for (j=0 ; j<5 ; j++)
	{
		printf ("%d\t",arr2[j]);
	}
	
	printf ("\nThe Odd elements are : ");
	for (k=0 ; k<5 ; k++)
	{
		printf ("%d\t",arr3[k]);
	}
	
	
	
	
	
}
