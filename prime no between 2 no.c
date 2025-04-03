#include <stdio.h>

int main()
 {
   int a, b, i,j;
   int sum =0;
   printf("Enter interval: ");
   scanf("%d %d", &a, &b);
   printf("Prime numbers between %d and %d are: ", a, b);


   while (a< b) 
   {
      
      if (a <= 1)
	   {
         ++a;
         continue;
      }
      
      
      for (i = 2; i <= a / 2; ++i) 
	  {

         if (a % i == 0) {
       
            break;
         }
      }

      if (a%i!=0)
         printf ("%d\t",a);
      ++a;
		
   }

   return 0;
}
