// TRAVERSING OF ARRAY ELEMENTS

#include<stdio.h>
int main ()
{
	int arr[] = {1,2,3,4,5,6};
	int i ;
	printf ("Using for loop : ");
	for (i=0 ; i<6 ; i++)
	{
		printf ("\narr[%d] = %d",i,arr[i]);
	}
	
	//Now while loop 
	
	int j ;
	printf ("\nUsing while loop :  ");
	j=0 ;
	while (j<6)
	{
		printf ("\narr[%d] = %d",j , arr[j]);
		j=j+1 ; ;
	}
}
