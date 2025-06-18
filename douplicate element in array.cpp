// FIND DOUPLICATE ELEMENTS IN AN ARRAY


#include <iostream>
using namespace std ;

int main ()
{

    int arr[100] ;

    int n ,i ,j;
     cout << "Enter no of array element : " ;
    cin >> n ;

    cout << "\n\n\n:::::::::::::: ENTER ARRAY ELEMENT ::::::::::::::\n\n" ;

    for ( i = 0 ; i<n ; i++)
    {

        cin >> arr[i];
    }

    cout << "\n\n::::::::::::::::::::: THE UNIQUE ELEMENT IN THIS ARRAY :::::::::::::::::\n\n" ;

    for (i= 0 ; i< n ; i++)
    {
        int found  =0 ;

        int a = arr[i];

        for (j=0  ; j<n ; j++)
        {
            int b =arr[j];

            if (a == b)
            {

                found ++ ;
            }
        }


        if (found > 1)
        {

            cout << a << " " ;
        }



     }

cout << endl << endl << endl ;



}

