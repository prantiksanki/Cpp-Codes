#include <iostream>
#include <cstring>
using namespace std ;

class Hero
{
    public :
     char level ;
     int health ;
     char name[100] ;
};

int main ()
{
    Hero h1 ;
    h1.level = 'A' ;
    h1.health = 90 ;
    char name[50] = "Prantik" ;
    strcpy(h1.name , name) ;
    cout << (h1.level) << endl;
    cout << (h1.health) << endl;
    cout << (h1.name) << endl;

}
