#include <iostream>
using namespace std ; 

class classA
{
    public:
        int a = 10  ;
        string  b = "Prantik" ; 

        void display()
        {
            cout << "Value of a is " << a << endl ; 
            cout << "Values of b is " << b << endl ; 
        }
}; 


class classB 
{
    public :
        int c = 20 ;
        string d = "Prantik Sanki" ;

        void display()
        {
            cout << "Value of c is " << c << endl ; 
            cout << "Values of d is " << d << endl ; 
        }
} ; 

class classC : public classA , public classB
{
    public:
    int e = 30 ;
    string f = "Prantik Sanki" ;

    void display()
    {
        cout << "Value of a is " << a << endl ; 
        cout << "Values of b is " << b << endl ; 
    }
} ; 

int main ()
{
    classC obj ; 

    cout << obj.a << endl ;
    cout << obj.b << endl ;
    cout << obj.c << endl ;
    cout << obj.d << endl ;
    cout << obj.e << endl ;
    cout << obj.f << endl ;
}

