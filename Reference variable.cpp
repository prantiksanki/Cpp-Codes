#include <iostream>
using namespace std ;

int main ()
{
    int i = 5 ;
    int &j = i ;

    j++ ;
    cout << sizeof (j) << endl ;

   cout << i << endl;
      cout << j << endl;
char *ch = new char ;
*ch = 'p' ;
cout << ch << endl ;

cout << sizeof (ch) << endl ;
cout << sizeof (new char) << endl ;



}
