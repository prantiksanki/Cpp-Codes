#include<iostream>

using namespace std ;

/*int main ()
{
    int arr[] = {1,3,4,5,7,8} ;

    int n =  sizeof (arr) / sizeof (arr[0]) ;
    for (int i = 0 ; i < n-1 ; i++)
    {
        if (arr[i] +1 != arr[i+1])
        {
            //arr[i+1] = arr[i] +1 ;
             cout << "The missing element is : " << arr[i]+1 << endl ;

        }
    }


}

*/

int main ()
{
    int arr[] = {1,2,6,5,4,7,8} ;
    int n = sizeof (arr) / sizeof (arr[0]) ;

    for (int i =0 ; i< n ; i++)
    {
        for (int j = 0 ; j < n ; j++)
        {
            if (arr[i] +1 != arr [j])
            {
                cout << "The missing element is : " << arr[i] + 1 << endl ;
            }
        }
    }
}
