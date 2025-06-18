#include <iostream>
using namespace std ;

int main ()
{
   /*
    int p = 10 ;
    int *q = &p ;
    cout << "*q : " << *q << endl ;
    cout << "q : " << q << endl ;

    cout << "q+1 : " << q+1 << endl ;
    cout << "*(q+1) :  " << *(q+1) << endl ;
    */
   // int  arr[10] ;
    //cout << "arr : " << arr << endl ;
    //cout << "arr+1 : " << arr+1 << endl ;


     char str[] = "Hello" ;
       cout << "str : " << str << endl;
       char *p = &str[0] ;
       cout << "p : " << p << endl  ;
       cout << "*p : " << *p << endl ;
       cout << "*(P+1)+1    : "<<*(p+1)+1 << endl ; // ASCII(e)+1



}
