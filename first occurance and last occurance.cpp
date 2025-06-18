// FIRST OCCURANCE AND LAST OCCURANCE


#include <iostream>
using namespace std ;


int firstLastOccurance (int arr[] , int n , int key)
{

    int counti = 0 ;
    int  i;

    for (i= 0 ; i <n ; i++)
    {
        if (arr[i] == key)
        {

            counti ++ ;
        }
    }

    cout << '\n'<<'\n' ;


    //int i ;
    int found  = 0 ;
    cout << "The first ocurance is in position : " ;
    for (i =0 ; i<n ; i++)
    {
        if (arr[i] == key )
        {

            found ++ ;
        }


        if (found == 1)
        {

            cout  << i ;
        }

    }

    cout << '\n' << '\n' ;

    int  j ;
     int foundi =0 ;
    cout << "The last occurance is in position : ";

    for (j=0 ; j<n ; j++)
    {
     if (arr[j] == key )
     {

         foundi ++ ;

     }
     if (foundi == counti)
     {

         cout << j ;
         break ;
     }


    }




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

    int j = firstLastOccurance (arr , n , k);



}
