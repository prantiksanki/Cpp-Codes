/*

A
B C
C D E
D E F G

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

            cout << char(ch+j-1) << "  " ;
            j=j+1 ;

        }

        i=i+1 ;

    }

}
