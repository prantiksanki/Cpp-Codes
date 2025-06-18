#include <iostream>
using namespace std ;

int main ()
{
    int a[5] = {1,2,3,4,5} ;
    int n = sizeof(a) / sizeof (a[0]) ;
    //cout << n<< endl ;


        for (int i = 0 , j=n-1 ; i< n , j>0 ; i++ , j--)
        {
            swap(a[i] , a[j]) ;
        }


    for (int k = 0 ; k < n ; k++)
    {
        cout << a[k]<< " " ;
    }

}
