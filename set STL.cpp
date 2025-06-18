#include<iostream>
#include<set>
#include<array>
using namespace std ;

int main ()
{

    set<int>s ;
    array <int,10>arr = {1,2,3,4,3,2,5,6,4,1} ;

    for (int i = 0 ; i< arr.size() ; i++)
    {
        s.insert(arr[i]) ;

    }

    for(auto i:s)
    {

        cout << i << "  " ;
    }
}
