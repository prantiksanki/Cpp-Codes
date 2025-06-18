// compliment of base 10 integer

#include <iostream>
#include <math.h>
using namespace std ;

int main ()
{
     int i ;
    cout<< "\n1 - 10's compliment";
    cout <<"\n2 - 9's  compliment " ;

    cout<< "\nChoose a option : ";
    cin>> i ;



    switch (i)
        {
        case 1:
            {
                int n,k ;
                cout<<  "Enter the no : ";
                cin >> n ;
                cout << "Enter the no of digits : ";
                cin >> k ;

                int rem,p,sum=0 ;
                for (i=0 ; i<k ; i++)
                {
                    rem = n%10 ;
                    p = 9-rem ;
                    sum = sum + p*(pow(10,i)) ;
                    n=n/10 ;


                }

                cout << "The 10's compliment of this no is : " << sum+1<< endl << endl << endl;
                break ;


            }

        case 2:
            {
                int n ,k;
                cout<<  "Enter the no : ";
                cin >> n ;
                cout << "Enter no of digit : ";
                cin >> k ;
                int rem,p,sum=0 ;
                for (i=0 ; i<k ; i++)
                {
                    rem = n%10 ;
                    p = 9-rem ;
                    sum = sum + p *(pow (10,i)) ;
                    n=n/10 ;


                }

                cout << "The 9's compliment of this no is : " << sum<<endl << endl << endl;
                break ;





            }

        default :
            {
                cout << "Please enter correct choice";
            }



        }
}
