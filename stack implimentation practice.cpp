#include <iostream>
using namespace std ;


class stack
{

public :
    int top ;
    int sizeStack ;
    int *arr ;


stack (int s)
{
    this -> sizeStack = s ;
    top = -1 ;
    arr = new int[s] ;
}

void push (int d)
{
    if (top < sizeStack-1)
    {
        top++ ;
        arr[top] = d ;
    }
    else

    {
        cout << "Stack Overflow" << endl;

    }
}


void print ()
{
    if (top > -1)
    {
         cout << "The stack elements are : " << endl ;
    for (int i = 0; i<= top ; i++)
    {
        cout << arr[i] << " " ;
    }
    }

   else
   {
       cout << "No stack element present" << endl ;
   }

}

void pop ()
{
    if (top == -1)
    {
        cout << "The stack is already empty."  << endl ;
    }
    else
    {

        top -- ;

    }

}

};




int main ()
{
    stack st(10) ;
    st.push (10) ;
    st.push (20) ;
    st.push (30) ;

    st.print() ;
    st.pop() ;
    st.print() ;


}
