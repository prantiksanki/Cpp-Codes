/*


* * * *
  * * *
    * *
      *

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

        cout << '\n' ;
        j=1 ;

        while (j <= i-1)
        {

            cout << " " << " " ;
            j = j+1 ;

        }
        j=1 ;

        while (j<= (m-i+1))
        {

            cout << "*" << " " ;
            j=j+1 ;
        }

        i=i+1 ;
    }


}
