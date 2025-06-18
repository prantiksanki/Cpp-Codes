//STL ARRAY

#include <iostream >
#include <array>
using namespace std ;

int main ()
{
    //int a ;
    array<int,5>a = {12,5,3,1,10} ;

    int size =a.size() ;

    for ( int i=0 ; i< size ; i++)
    {
        cout << a[i] << " " ;

    }

    cout << "\nElement at 2nd index : " << a.at(2) << endl;

    cout << "\nEmpty array or not ? : " << a.empty ()<< endl  ;

    cout << "\nFirst element is : " << a.front() << endl ;

    cout << "\nLast element is : "<< a.back() << endl ;


}
