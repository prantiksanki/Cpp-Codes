// SAY DIGIT

#include <iostream>
using namespace std ;



void say_digit (int n , char arr[])
{

    if (n == 0)
    {
        cout << arr[n] << " " ;
    }

    int p = n%10 ;
    say_digit (n/10 , arr);

    cout << arr[p] << " " ;

}

int main ()
{
    int n ;
    cout << "Enter no : ";
    cin >> n ;

    char arr[] = {"Zero" , "One" ,"Two" ,"Three" ,"Four" ,"Five" ,"Six" ,"Seven" ,"Eight" ,"Nine"} ;

    say_digit(n , arr);


}
