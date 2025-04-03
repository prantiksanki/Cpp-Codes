#include<stdio.h>
int main ()
{
	int arr1[]={1,2,3,4,5,6,7,8,9,10};
	int arr2[10] , arr3[10];
	int i,j=0,k=0;
	for (i=0 ; i<10 ; i++)
	{
		if (arr1[i]%2==0)
		{
			arr2[j] = arr1[i];
			j++ ;
		}
		else 
		{
			arr3[k]=arr1[i];
			k++;
		}
	}
	
	printf ("The even no array is ::: ");
	for(i=0 ; i<j ; i++)
	{
		printf ("%d\t",arr2[i]);
	 }
	 printf ("\n");
	 printf ("The odd no array is ::: ");
	 
	 for (i=0 ; i<k ; i++)
	{
		printf ("%d\t",arr3[i]);
	 }
	 return 0 ; 
}
