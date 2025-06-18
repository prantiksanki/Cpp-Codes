/*

* * * *
* * * *
* * * *
* * * *

*/


#include <iostream>
using namespace std ;
int main ()
{

  int n ,m , j;
  cout << "Enter  the no of rows and column : " ;
  cin >> n >> m ;

  int i ;
  i = 1 ;
  while (i<=n)
  {
     j = 1 ;

     while (j<=m)
     {
        cout << "*" << '\t' ;
        j = j+1 ;
     }

     i= i+1 ;

     cout << "\n" ;
  }


}
