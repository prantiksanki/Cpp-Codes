/*#include<stdio.h>
int main ()
{ 
     int n ,rem;
     int count = 0 ;
	 printf ("Enter a no : ");
	 scanf ("%d",&n);
	 int i ;
	 for (i=1 ; i<=n ; i++)
	 {
	 	rem = n%i ;
	 if (rem == 0);
	 {
	 	count ++ ;
	  }
     }
	  
	  
	  if (count == 2)
	  {
	  	printf ("It is prime no ");
	  }
	  else {
	  	printf ("It is not prime no");
	  }
}*/



#include <stdio.h>

int main() {
    int n, rem;
    int count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    int i;
    for (i = 1; i <= n; i++) 
	{
        rem = n % i;
        if (rem == 0)
		 {
            count++;
        }
    }

    if (count == 2)
	 {
        printf("It is a prime number.\n");
    } else {
        printf("It is not a prime number.\n");
    }

    return 0;
}

