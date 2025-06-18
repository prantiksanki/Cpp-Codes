#include <iostream>
using namespace std ;

void checkDouplicate(int arr[] , int n)
 {
      // int n = sizeof (arr) / sizeof(arr[0]) ;
     cout << "The douplicate elements are : " << " " ;
     for (int i = 0 ; i< n ; i++)
     {
         for (int j = i+1 ; j< n ; j++)
         {
             if (arr[i] == arr[j])
             {
                 cout << arr[j] << " " ;
             }
         }
     }
 }


 int main ()
 {
     int arr[] = {1,2,2,3,4,5,4,5,6,7,6,8,9} ;
     int n = sizeof (arr) / sizeof(arr[0]) ;
     checkDouplicate(arr , n) ;
     return 0 ;
 }

