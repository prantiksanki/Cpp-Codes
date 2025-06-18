#include <iostream>

using namespace std ; 

class functionOverloading
{
    public: 
        void sayHello ()
        {
            cout << "Hello" << endl ;  
        }

        int sayHello (int a )
        {
            cout << "Hello" << endl ; 
            return a ; 
        }
        
        void sayHello(string name)
        {
            cout << name << endl ; 
        }

}; 

int main ()
{
    functionOverloading obj ; 
    obj.sayHello() ; 
    obj.sayHello(10) ;
    obj.sayHello("Prantik") ;
}