// SELECTION SORT

#include <iostream>
using namespace std ;


int selectionSort(int arr[] , int n )
{
    int  i, j,p;

    for (i =0 ; i<n ; i++)
    {
         p = i ;


        for (j=i+1 ; j<n ; j++)
        {

            if (arr[j] < arr[p])
            {
                swap (arr[p] , arr[j]) ;

             }

        }

         cout << arr[p] << "\t";
     }

}

int main ()
{


    int arr[50];

    int n ;
    cout << "Enter the no of elements : ";
    cin >> n ;

    int i ;
    for (i =0 ; i<n ; i++)
    {
        cout << "Enter no : ";
        cin >> arr[i] ;


    }

    selectionSort (arr , n) ;



}
