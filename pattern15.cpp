/*

A B C
B C D
C D E

*/


#include <iostream>
using namespace std ;

int main ()
{
   int i,j, m ;
char ch ;

   cout << "Enter the no of row : " ;
   cin >> m ;


   i=1 ;

   while (i<=m)
   {
    ch = 'A' +i-1 ;
    cout << '\n' ;

    j = 1 ;

    while (j<=m)
    {
      cout << char (ch+j-1 ) << '\t' ;
      j=j+1 ;

    }

    i=i+1 ;


   }

}
