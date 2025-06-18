// BINARY SEARCH

#include <iostream>
using namespace std ;

int binarySearch(int arr[] , int s , int key)
{

    int i ;
    int start = 0 ;
    int ed  = s-1 ;

   // int mid = (start + ed )/2 ;

    while (start <= ed)

    {
        int mid = start + (ed - start) / 2;

         if (arr[mid] == key)
         {

             return mid ;
         }

         if (key > arr[mid])
         {
             start = mid +1 ; ;

        }

        else
        {
            ed = mid -1 ;
         }

        mid = (start + ed)/2 ;




    }



return -1 ;


}


int main ()
{

    int arr[50] ;
    int  i;

    int  n ;

    cout << "Enter no of terms in the array : ";
    cin >> n ;

    cout << ":::::::::::::::: Enter the elements :::::::::::::::::::" << endl << endl ;

    for (i=0 ; i<n ; i++)
    {
        cout << "Enter No : ";
        cin >> arr[i] ;

    }


    int key ;
    cout << "Enter the element you want to find :";
    cin >> key ;

    int  j = binarySearch (arr , n , key);

    cout << "This term is in the index : " << j ;

}



