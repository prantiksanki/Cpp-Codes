#include <iostream>

using namespace std ;

int main ()
{

    int arr[] = {1,2,3,4,5};
    int s = sizeof(arr) / sizeof (arr[0]) ;
    //cout << s<< endl ;

    if (s %2 == 0)
    {
        for (int i = 0 ; i<s ; i = i+2)
        {
            swap (arr[i] , arr[i+1]) ;
        }


    for (int i = 0 ; i < s ; i++)
    {
        cout << arr[i] << " " ;
    }

    }
    else
    {
         for (int i = 0 ; i<s-1 ; i = i+2)
        {
            swap (arr[i] , arr[i+1]) ;
        }


    for (int i = 0 ; i < s ; i++)
    {
        cout << arr[i] << " " ;
    }
    }


}
