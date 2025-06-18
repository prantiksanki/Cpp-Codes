// ARRAY INTERSECTION


#include <iostream>
using namespace std ;

int main ()
{

    int arr1[50] , arr2[50] ;
    int m , n , i , j ;

    cout << "Enter no of digit in 1st array : ";
    cin >> m ;



    cout << "Enter no of digit in 2nd array : ";
    cin >> n ;

    cout << "\n\n::::::::::::::: ENTER THE ELEMENT OF 1ST ARRAY :::::::::::::::::\n\n" ;
    for (i=0 ; i<m ; i++)
    {

        cin >> arr1[i] ;
    }


    cout << "\n\n::::::::::::::: ENTER THE ELEMENT OF 2ND ARRAY :::::::::::::::::\n\n" ;
    for (i=0 ; i<n ; i++)
    {

        cin >> arr2[i] ;
    }




    // ARRAY INSERTION

    cout << "\n\n::::::::::::::: THE INTERSECTION OF THESE TWO ARRAY :::::::::::::::::\n\n" ;

    for (i=0 ; i<m ; i++)
    {

        int a = arr1[i] ;
        int found  =0 ;



        for (j=0 ; j< n ; j++)
        {

           int b = arr2[j];
            if (b == a)
            {
                found ++ ;
            }
        }



        if (found >= 1)
        {

            cout << a << " ";
        }
    }

    cout << endl << endl << endl ;




}
