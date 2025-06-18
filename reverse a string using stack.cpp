#include<iostream>
#include<string>
using namespace std ;


class Stack
{
public :
    int size ;
    int *arr ;
    int top = -1 ;

    Stack (int s)
    {
        this -> size = s ;
        top = -1 ;
        arr = new int [s] ;
    }


void push (string d)
{
    for (int i = 0; i < d.size(); i++)
        {
            if (top >= size - 1)
            {
                cout << "Stack Overflow.." << endl;
                return; // Exit if stack overflows
            }
            top++;
            arr[top] = d[i];
        }
}

void display ()
{
    for (int i = top ; i >= 0  ; i-- )
    {
        cout << (char)arr[i] << "" ;
    }
}
};

int main ()
{
    string str ;
    cout << "Enter a string : " << endl ;
    cin >> str;
    int n = str.size() ;
    Stack st(n) ;

    st.push(str) ;

/*
    for (int i = 0 ; i< n ; i++)
    {
        st.push(str[i]) ;
    } */

    st.display();


}
