/*

1 1 1
2 2 2
3 3 3

*/


#include <iostream>
using namespace std ;

int main ()
{
   int m , n , i , j ;

   cout << "Enter the no of row and column : " ;
   cin >> m >> n ;

   i =1 ;

   while (i<=m)
   {
     j = 1 ;
     while (j<=n)
     {
          cout << i << '\t';
          j=j+1 ;

     }
     i=i+1 ;
     cout << '\n' ;

   }

}
