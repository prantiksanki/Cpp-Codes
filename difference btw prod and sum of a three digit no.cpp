// difference btw product and sum of a three digit no ;



#include <iostream>
using namespace std ;

int main ()
{

    int n , i ,rem ;

    cout << "Enter a three digit no : " ;
    cin >> n ;
      cout << endl << endl ;
    cout << "The no is : "<< n << endl ;
    int sum =0 ,
    prod =1 ;
    i=1 ;


     while (i<=3)

    {
        rem = n%10 ;

        sum = sum + rem ;
        prod = prod * rem ;

        n=n/10 ;

        i=i+1 ;

    }

   cout << "Sum of digits of this no is : " << sum << endl ;

   cout << "Product of digits of this no is : " << prod << endl  ;



    int diff = prod - sum ;
   cout << "Difference of product and sum of digit is : " << diff << endl ;

}

