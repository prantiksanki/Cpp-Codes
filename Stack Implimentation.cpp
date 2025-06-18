#include <iostream>
using namespace std ;

class Stack
{
public :
    int top ;
    int *arr ;
    int Ssize ;

    Stack(int Ssize)
    {
        this -> Ssize = Ssize ;
        arr = new int[Ssize] ;
        top = -1 ;
    }

    void push(int val)
    {
        if (top >= Ssize)
        {
            cout << "Stack Overflowed" << endl ;
            return ;
        }
        else
        {
            top++ ;
            arr[top] = val ;
        }
    }


    void pop ()
    {
        if (top == -1)
        {
            cout << "Stack empty" << endl ;
        }
        else
        {
            int x =  arr[top] ;
            top-- ;
            cout << "Poped element is : " << x << endl ;

        }
    }

    void display()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl ;
        }
        else
        {
            for (int i = 0 ; i<= top ; i++)
            {
                cout << arr[i] << " " ;
            }
            cout << endl ;
        }

    }


    void peek()
    {
        if (top == -1)
        {
            cout << "Stack is empty"<< endl ;
        }

        else
        {
            cout << "The pick elemet is : " << arr[top]<< endl;

        }
    }



};



int main ()
{
    int n , ch;
    cout << "Enter size of this stack : " ;
    cin >> n ;

    Stack st(n) ;

    while (1)
    {
    cout << "1.Push  2.Pop  3.Display  4.Peek element  5.Exit" << endl ;
    cout << "Choice : " ;
    cin >> ch ;
    switch (ch)
    {
    case 1:
        {
        int d ;
        cout << "Enter no : ";
        cin >> d ;
        st.push(d) ;
        break ;
        }


    case 2:
        {
            st.pop() ;
            break ;
        }
    case 3 :
        {
            st.display();
            break ;
        }
    case 4:
        {

            st.peek() ;
            break  ;
        }
    case 5:
        return 0 ;

    }


}

};
