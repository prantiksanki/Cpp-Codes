#include<iostream>
using namespace std ; 


void firstToLast(int n)
{
    if(n == 11)
    {
        return ; 
    }
    cout << n  << " " ; 
    firstToLast(n+1);
}

void lastToFirst(int n)
{
    if(n == 11)
    {
        return;
    }
    lastToFirst(n+1) ; 
    cout << n << " " ; 
    
}

int main()
{

    cout << "First to last" << endl ;
    firstToLast(0);

    cout << "Last to first" << endl ;
    lastToFirst(0);
}