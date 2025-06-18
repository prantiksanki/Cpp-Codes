#include<iostream>
#include<cstring>
using namespace std ;


void replacespace(char str[] , int n )
{
    char result[500] ;

    for (int i = 0 ; i< n ; i++)
    {
        if (i == ' ')
        {
           result[i] += '@40' ;
        }
        else
        {
            result[i] += str[i] ;
        }
    }

    for (int i = 0 ; i< n ; i++)
    {
        cout << str[i] ;
    }
}


int main ()
{
    char str[500] ;
    cout << "Enter a sentence: " ;
    cin.getline(str , 500);
    int n ;
    n = strlen() ;
    replacespace(str , n) ;

}

