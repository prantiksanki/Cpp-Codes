#include<iostream>

using namespace std ; 

class staticBlockSimulation
{
    public:
    string name; 
    int age ; 

    staticBlockSimulation()
    {
       cout << "Prantik Sanki is on track" << endl ; 
    }

} ; 

static staticBlockSimulation d ; 

int main()
{
     cout << "Prantik Sanki is out from track" << endl ; 
    return 0 ; 
}
