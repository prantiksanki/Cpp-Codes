#include<iostream>

using namespace std ;
/*
int main ()
{
    int arr[10] = {1,2,3,4,5} ;
    int *p = arr ;
    cout << arr[0]<<endl ;
    cout << *(p+0) << endl ;

}
*/

int main ()
{
    int first = 110 ;
    int*p = &first ;
    int**q = &p ;
    int second = ++(**q) ;
    int*r = *q  ;
    ++(*r) ;
    cout << first << " "<< second << endl ;
}
