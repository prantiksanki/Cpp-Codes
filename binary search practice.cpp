// BINARY SEARCH

#include <iostream>

using namespace std ;

int binarySearch (int arr[] , int n , int key )
{
    int a = 0 ;
    int b =n-1 ;

    int mid = (a+b)/2 ;

    while (a<= b)
    {

        if (arr[mid] == key)
        {

            return mid ;
        }

        if (arr[mid] < key)
        {

            a  = mid ;
        }
        else
        {

            b = mid ;
        }

        mid = (a+b)/2 ;
    }

return -1 ;



}


int main ()
{

    int arr[50] ,n ;

    cout << "Enter the no of array element : ";
    cin >> n ;

    cout << "::::::::::::::::::::::: ENTER THE ARRAY ELEMENTS ::::::::::::::::::::::: "<< endl << endl ;

    int i ;

    for (i= 0 ; i<n ; i++)
    {

        cout << "Enter no : ";
        cin >> arr[i] ;

    }

    cout << "The entered array is : ";

     for (i= 0 ; i<n ; i++)
    {

        cout << arr[i] << " ";


    }

    cout << '\n'<< '\n' ;


    int k  ;


    cout << "Enter no which you want to search :  ";
    cin >> k ;

    int j =  binarySearch (arr , n , k);

    cout << "The no is in position : " << j ;


}
