// PAIR SUM


#include <iostream>
using namespace std ;

int main ()
{

    int arr[100] ;

    int n ,i ,j,p,q;
     cout << "Enter no of array element : " ;
    cin >> n ;

    cout << "\n\n\n:::::::::::::: ENTER ARRAY ELEMENT ::::::::::::::\n\n" ;

    for ( i = 0 ; i<n ; i++)
    {

        cin >> arr[i];
    }

    cout << "\n\n\n:::::::::::::: ENTERED ARRAY ::::::::::::::\n\n" ;


    for ( i = 0 ; i<n ; i++)
    {

        cout <<  arr[i] << " " ;
    }

    // PAIR SUM

            int coun =0 ;


    cout << " \n\n\n:::::::::::::: THE PAIR SUM OF ARRAY ::::::::::::::: "<<endl << endl ;

    for (i=0 ,p=0 , q=1 ; i<n ,p<n , q<n ; i++,p=p+2 , q=q+2)
    {
         int  a = arr[q] , b= arr[p] ;
        int sum = 0;

        int temp = a ;
        a=b ;
        b=temp ;
        coun ++ ;

        sum = sum + a+b ;
        cout << sum << " " ;

    }

    if (n%2 != 0)
    {

        cout << arr[coun*2]  ;
    }


}
