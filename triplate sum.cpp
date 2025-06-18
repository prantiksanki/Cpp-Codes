// TRIPLATE SUM


#include <iostream>
using namespace std ;

int main ()
{

    int arr[100] ;

    int n ,i ,j,p,q,r;
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


    cout << " \n\n\n:::::::::::::: THE TRIPLATE SUM OF ARRAY ::::::::::::::: "<<endl << endl ;

    for (i=0 ,p=0 , q=1 , r=2 ; i<n ,p<n , q<n , r<n; i++,p=p+3 , q=q+3, r=r+3)
    {
         int  a = arr[q] , b= arr[p] , c = arr[r];
        int sum = 0;

        int temp = a ;
        a=b ;
        b=c ;
        c=temp ;
        coun ++ ;

        sum = sum + a+b +c ;
        cout << sum << " " ;

    }

    cout << "\n\n::::::::::::::::: REMAINING ELEMENTS ::::::::::::::: \n\n" ;
    if (n%3 != 0)
    {

        cout << arr[coun*3] <<" " <<  arr[coun*3+1] ;
    }


    cout << endl << endl ;
}
