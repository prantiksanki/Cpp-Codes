#include <stdio.h>
int armstrong (int);
int main ()
{
	int n ;
	printf ("Enter the no to check armstrong or not :   ");
	scanf ("%d",&n);
	int h = armstrong (n);
	if (h==1)
	{
		printf ("It is an Armstrong no");
	} 
	else 
	{
		printf ("It is not an armstrong no ");
	}
}
armstrong (int x)
{
	int rem ;
	int sum =0 ;
	int original = x ;
      while (x > 0)
      {
      	rem = x%10 ;
      	sum = sum + (rem * rem * rem);
      	x = x/10 ;
	  } 
	  if (sum == original)
	  {
	       return 1 ;
	  } else 
	  {
	  	return 0 ;
	  } 

}
