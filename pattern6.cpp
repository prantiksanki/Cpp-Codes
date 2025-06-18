/*
1
2 2
3 3 3
4 4 4 4
*/

#include <iostream>
using namespace std ;

int main ()
{

  int m ,i,j ;

  cout << "Enter the no of row : " ;
  cin >> m ;


  i=1 ;
  while (i<=m)
  {
    cout << "\n" ;

    j = 1 ;
    while (j<=i)
    {
       cout << i << " " ;
       j = j+1 ;
    }
    i = i+1 ;
  }
}
