#include<iostream>
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

            if (top >= size - 1)
            {
                cout << "Stack Overflow.." << endl;
            }

            else
           {
            top++;
            arr[top] = d[i];
           }
}

void pop()
{
    if (top == -1)
    {
            cout << "Stack Empty.." << endl ;
    }
    else
    {

        top-- ;
    }
}

void display ()
{
    for (int i = 0 ; i <= top  ; i++ )
    {
        cout << arr[i] << "" ;
    }
}
};


int main ()
{
    Stack st(5) ;
    st.push(10) ;
    st.push(20) ;
    st.push(30) ;
    st.push(40) ;
    st.push(50) ;

    int middle = (5/2) +1 ;

    for (int i = top ; i>= middle)


}
