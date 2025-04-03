#include <stdio.h>
disp (int *x)
{
	printf ("%d",*x);
}

int main ()
{
	int i;
	int arr[] = {1,2,3,4,5,6,7,8,9,0};
	for (i=0;i<10;i++)
      
      {
      	disp (& arr[i]);
	  }
	  return 0;
}

