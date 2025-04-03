#include <stdio.h>
#include <stdlib.h>
int main () {
   int i, n;
  
   n = 5;     
   for( i = 0 ; i < n ; i++ ) {
      printf("%d\n", rand() % 50);
   }
   
   return(0);
}
