#include <iostream>
using namespace std ;

int main ()
{
    int arr[] = {1,7,8,10,11,15,19} ;
    int n = sizeof (arr) / sizeof (arr[0]) ;
    int e = n-1 ;
    for (int i = 0 ; i< n ; i++)
    {
        cout << arr[i] << " " ;
    }

    int f ;
    cout << endl << "No to find : " ;
    cin >> f ;
    int s =0 ;
    int mid = (s+e)/2 ;

    while (s <= e)
    {
        if (f == arr[mid])
        {
            cout << "The no is in position : " << mid << endl ;
        }
        if (f > arr[mid])
        {
            s = mid+1 ;
        }
        else if (f < arr[mid])
        {
            e = mid -1 ;
        }

        mid = (s+e)/2 ;

    }

}
