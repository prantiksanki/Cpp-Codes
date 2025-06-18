/*

A
B B
C C C

*/


#include <iostream>
using namespace std ;

int main ()
{

    int i,j,m ;

    cout << "Enter the no of row : " ;
    cin >> m ;


    i=1 ;
    while (i<=m)
    {
        cout << '\n' ;
        char ch ='A' +i-1 ;
        j=1 ;

        while (j<=i)
        {

            cout << ch << "  " ;
            j=j+1 ;

        }

        i=i+1 ;

    }

}
