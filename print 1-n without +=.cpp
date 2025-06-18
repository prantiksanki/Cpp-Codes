#include<iostream>
using namespace std ;


void disp(int cnt, int n)
{
    if(cnt < 1)
    {
        return ;
    }
    disp(cnt-1,n) ;
    cout << cnt << endl;
}

int main()
{
    int n , cnt  ;
    cin >> n ;
    cnt = n ;
    disp(cnt, n) ;
}
