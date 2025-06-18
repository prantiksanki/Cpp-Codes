/*


*
* *
* * *
* * * *


*/

#include<iostream>
using namespace std ;
int main ()
{
     int m ,n,i,j ;
     cout << "Enter the no of row : " ;
     cin >> m  ;

     i = 1 ;
      while (i<=m)
      {
          cout << "\n" ;
          j=1 ;

          while (j<=i)
          {

             cout << "*" << " " ;
             j = j+1 ;
          }

          i = i+1 ;


      }


}
