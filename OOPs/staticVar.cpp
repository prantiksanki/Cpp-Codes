#include <iostream>

using namespace std ; 

class staticVar
{
    public:
        static string collage ; 
        int studentNo; 
        int avgAge ; 
    
    staticVar(int studentNo , int avgAge)
    {
        this -> studentNo = studentNo ; 
        this -> avgAge = avgAge ; 
    }

    ~staticVar()
    {
        cout << "Destuctor called" << endl ; 
    }
} ; 

string staticVar :: collage = "UPES" ; 


int main()
{
    staticVar obj1(1000 , 20) ;
    staticVar obj2(2000 , 25) ;

    cout << obj1.studentNo << endl ; 
    cout << obj1.collage << endl ; 

    cout << endl ; 

    cout << obj2.studentNo << endl ; 
    cout << obj2.collage << endl ; 

}