#include<iostream>
#include<vector>

using namespace std ;

int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {

        int n ;
    cin >> n ;
    vector<int>store ;
    for(int i = 0 ; i< n ; i++)
    {
        int it ;
        cin >> it ;
        store.push_back(it) ;
    }
    int s = 0 ;
    int ptr = 0 ;
    for(int i = 0 ; i < n ; i++)
    {
        s += store[i] ;

        if(s % 2 == 0)
        {
            ptr ++;
            while(s%2 != 0)
            {
                s = s/2 ;
            }
        }

    }

    cout << ptr << endl ;
    }


}
