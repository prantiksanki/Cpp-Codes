/*

A B C
D E F
G H I

*/


#include <iostream>
using namespace std ;

int main ()
{
   int m , i,j , count =1 ;

   cout << "Enter the no of row : ";
   cin >> m ;


   i = 1 ;
    while (i<=m)
    {
       cout << '\n' ;
       j=1 ;
       count =
       while (j<=m)
       {
          char ch = 'A' + count -j ;
          cout << ch << " " ;
          j = j+1 ;

       }

       count = count +i ;

              i=i+1 ;

    }

   }

