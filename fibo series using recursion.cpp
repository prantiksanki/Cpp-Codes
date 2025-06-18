#include <iostream>
using namespace std ;

void fibo (int p ,int a , int b)
{
    int a = 0 ;
    int b =1 ;

    cout << a << " " ;
    cout << b << " " ;
    int counter = 2 ;

    if (counter == p  )
    {
        return ;
    }
    else
    {
        return fibo (p , a+b , b)
    }

    cout <<

}

int main ()
{

    int p;

    cout << "Enter no of terms : " ;
    cin >> p ;
    int a = 0 ;
    int b = 1 ;

    fibo(p , a , b) ;
}

