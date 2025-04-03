//void coprime(int) reverses the given number and checks if the given number and reversed number are coprime.


#include <stdio.h>
int coprime (int);
int main ()
{
	int n,i,j;
	printf ("Enter the no : ");
	scanf ("%d",&n);
	 printf ("\nThe Factors of this no are : ");
      for ( j = 1; i <= n; j++)
    {
        if (n % j == 0)
        {
            printf("\n%d ", j);
        }
    }
	int h = coprime (n);
	printf ("The reverse no is : %d",h);
	printf ("\nThe Factors of this reversed no are :  ");
	 for ( i = 1; i <=h; i++)
    {
        if (h % i == 0)
        {
            printf("\n%d ", i);
        }
    }
     
    /* printf ("\nThe Factors of this no are : ");
      for ( j = 1; i <= n; j++)
    {
        if (n % j == 0)
        {
            printf("\n%d ", j);
        }
    }*/
     
	
}
coprime (int x)
{ 
    int rem ;
    int reversed = 0 ;
	while (x>0)
	{   
	
		rem = x%10 ;
		x = x/10 ;
		 reversed = reversed * 10 + rem;
	
	}
	return reversed ;
}
