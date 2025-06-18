// FIBONACCI SERIES


#include <iostream >
using namespace std ;

int main ()
{

    int a,b,i,n , c;


    cout << "Enter the no of terms you want to print : ";
    cin >> n ;


    //int sum = 0 ;


    a=0 ;
    b =1 ;

   // int temp =0 ;

    cout << a << " " ;
     cout << b << " " ;

    i=2 ;
    while (i<n)
    {

        c = a+b ;
        cout << c << " ";

        a=b ;
        b=c ;

        i=i+1 ;

    }
}
