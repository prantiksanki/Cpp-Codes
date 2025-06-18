// PRIME NO FIND


#include <iostream>

using namespace std ;

int main ()
{

    int n ,i ,j ;
    cout << "Enter the no : ";
    cin>> n ;

    int count = 0 ;


    i=2 ;
    while (i< n)
    {

        if (n%i ==0)
        {

            count ++ ;

        }



        i=i+1 ;


    }



    if (count == 0)
    {

        cout << "This no is prime .";

    }

    else
    {

        cout << "This no is not a prime no.";
    }




}
