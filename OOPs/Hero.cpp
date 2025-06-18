#include <iostream>
using namespace std  ;

class Hero 
{
    public:
    int age ; 
    int health;

    Hero(int age , int health)
    {
        this -> age = age ; 
        this -> health = health ;
    } 
    ~Hero()
    {
        cout << "Hero is destroyed" <<endl ; 
    }

} ;

int main()
{
    Hero a(25,100) ; 
    cout << "Hero created with age: " << a.age << " and health: " << a.health << endl;
    Hero* b = new Hero(2,2) ; 
    cout << b->age << endl ; 

}

