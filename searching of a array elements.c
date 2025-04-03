//SEARCHING OF ARRAY ELEMENTS

#include<stdio.h>
int main ()
{
	int i , found = 0,s ; 
	int arr[] = {9,3,12,9,7,5,6};
	printf ("Enter the no which you want to search : ");
	scanf ("%d",&s);
	int item = s ;
	for (i=0 ; i<7 ; i++)
	{
		if (item == arr[i])
		{
			found =1 ;
		break ;
		}
	}
	if (found == 1 )
	{
		printf ("Element is present in the position %d ",i+1);
	}
	else {
		printf ("This is not the element in this array");
	}
	return 0;
}
