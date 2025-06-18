#include <iostream>
#include <array>
using namespace std ;
int main ()
{
    array <int , 10> a = {1,2,3,4,5};
    int size = a.size() ;
    //cout<< size << endl;
    for (int i =0 ; i< a.size() ; i++)
    {
        cout << a[i] << " " ;
    }

}
