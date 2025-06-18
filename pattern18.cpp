/*

D
C D
B C D
A B C D

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
        char ch = 'D' - i +1 ;

         j=1 ;

        while (j<=i)
        {
            char p = ch + j - 1 ;

            cout << p << "  " ;
            j=j+1 ;

        }

        i=i+1 ;

    }

}
