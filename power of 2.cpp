// POWER OF 2
#include <iostream>
#include <math.h>
using namespace std ;


bool power (int n)
{



     for (int i=0 ; i<=30 ; i++)
     {
         int q = pow (2 , i) ;

         if (q == n)

         {

             cout << "This no is power of 2";
             break ;
         }


     }



}

int main ()
{
     int n ;
     cout << "Enter no : " ;
     cin >> n ;

     int h=power(n);
  /*
     if (h == true)
     {

         cout << "This no is power of 2" << endl << endl ;
     }

     else
     {

         cout << "This no is not power of 2"<< endl << endl ;
     }
*/


}


