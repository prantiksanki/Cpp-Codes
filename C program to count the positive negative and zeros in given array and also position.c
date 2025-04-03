#include <stdio.h>
int main ()
{
	int arr[]={1,-2,0,6,-4,0,-5,8,9,0};
	int i ;
	int zero =0 , pos = 0, neg = 0 ;
	for (i=0 ; i<10 ; i++)
	{
		if (arr[i]>0)
		{
			pos++ ;
			printf ("\npos =%d",i+1);
		}
	}
	for (i=0 ;i<10 ;i++)
	{
		if (arr[i]<0)
		{
			neg++ ;
			printf ("\nneg = %d",i+1);
		}
	}
	for (i=0 ; i<10 ; i++)
	{
		if (arr[i]== 0)
		{
			zero++ ;
			printf ("\nzero = %d",i+1);
		}
	}
	
printf ("\nThe total no of positive nos is : %d",pos);
printf ("\nThe total no of negetive no is : %d",neg);
printf ("\nThe total no of zero is : %d",zero);
}
