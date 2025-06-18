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

    int i , j , m ;

    cout << "Enter the no of row : ";
    cin >> m ;


    i = m ;
    while (i>=1)
    {

        cout << '\n' ;
        j=1 ;

        while (j<=i)
        {
            cout << "*" << " " ;
            j=j+1 ;
        }

        i=i-1 ;
    }
}
