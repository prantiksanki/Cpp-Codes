// INSERTION SORT

#include <iostream>

using namespace std ;

int main ()
{
    int arr[50];
    int n ,k ;

    cout << "Enter no of digits : ";
    cin >> n ;

    cout << "\n\n:::: ENTER THE DIGITS OF ARRAY ::::\n\n" ;

    for (k=0 ; k<n ; k++)
    {

        cout << "Enter no : " ;
        cin >> arr[k] ;
    }

    for (int i =0 ; i <n-1 ; i++)
    {

        int p = arr[i];
        int  j =i ;
        for (; j>=0  ; j--)
        {
            if (arr[j+1] > arr[j])
            {
                // SHIFT
                arr[j] = arr[j+1] ;

            }
            else
            {

                break ;
            }


        }
        arr[j+1] = p ;




     }


     cout << arr ;



}
