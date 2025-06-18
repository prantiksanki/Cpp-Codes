/*

A B C
A B C
A B C

*/


#include <iostream>
using namespace std ;

int main ()
{
   int m ,i,j ;

   cout << "Enter no of rows : " ;
   cin >> m  ;

   i = 1;
   while (i<=m)
   {
      cout << "\n" ;

      j = 1;

      while (j<=m)
      {
          char ch = 'A'+j -1 ;
          cout << ch << " " ;
          j = j+1 ;

      }

      i = i+1 ;

   }

}
