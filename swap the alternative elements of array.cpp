#include <iostream>
using namespace std ;

int main ()
{
    int  n,i ;

    int arr[50];

    cout << "Enter no of elements in array : ";
    cin >> n ;


    cout << "\n\n::::::::::::::::: Enter the elements of array ::::::::::::::::::\n" ;

    for (i=0 ; i<n ; i++)
    {

        cin >> arr[i];

    }

    cout << "Entered array is : "<< endl ;

    for (i=0 ; i<n ; i++)
    {
        cout << arr[i] << " " ;

    }

    cout << endl<< endl << endl ;


int p , q ;
int coun = 0 ;






   cout <<  "The atlernate element of this array is ::: "<< endl << endl ;
     for (i=0 ,p=0,q=1; i<n , p<n , q<n ; i++ , p=p+2 , q=q+2)
     {



     int a = arr[p], b = arr[q] ;
         int temp = a;
         a=b ;
         b=temp ;
         cout << a <<" " <<  b << " ";


          coun ++ ;

     }
     if (n %2 != 0)
     {

         cout << arr [coun * 2 ] ;

     }





}
