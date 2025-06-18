#include <iostream>

using namespace std ;
int main ()
{

    int arr[] = {1,2,3,3,4,5,6,3,2,2} ;
    int n = sizeof (arr) / sizeof (arr[0]) ;
    for (int i = 0 ; i< n ; i++)
    {
        int countn = 1 ;
        for (int j = 0 ; j< n ; j++)
        {
            cout << (arr[i] ^ arr[j]) << endl ;
            if (arr[i] ^ arr[j] == 0)
            {
                countn ++ ;
            }
        }

        cout << "No of occurance is : " << countn << "     ";
        if (countn % 2 != 0 && countn != 1)
        {
            cout <<"Odd occurance is of no : " << arr[i] << endl ;
        }
    }

}
