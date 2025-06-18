/*

1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4

*/

#include <iostream>
using namespace std ;
int main ()
{
int m , n , i , j ;

cout << "Enter the no of rows and column  : " << '\n' ;
cin >> m >> n;
 i = 1 ;

while (i<=m)
{
cout<< "\n";
j=1 ;

while (j<=n)
{
    cout << j << '\t';
    j=j+1 ;
}

i = i+1 ;
}

}
