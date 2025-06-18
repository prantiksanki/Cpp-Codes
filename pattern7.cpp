#include <iostream>
using namespace std ;

int main ()
{

  int m ,i,j,count=1  ;

  cout << "Enter the no of row : " ;
  cin >> m ;


  i=1 ;
  while (i<=m)
  {
    cout << "\n" ;

    j = 1 ;
    while (j<=i)
    {
       cout << count << " " ;
       count = count +1 ;
       j = j+1 ;
    }
    i = i+1 ;
  }
}
