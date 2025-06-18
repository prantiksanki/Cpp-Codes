// Pointer copy


#include <iostream>

using namespace std ;

int main ()
{


    int num = 5 ;
    int*p = &num ;

    cout << *p << endl ;
    cout << p << endl ;


    // copy pointer

    int *q = p;
    cout << *q << endl ;
    cout << q << endl ;

}
