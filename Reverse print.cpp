#include<iostream>
using namespace std ;


void disp(int cnt, int n)
{
    if(cnt == n)
    {
        return ;
    }
    cnt++;
    disp(cnt,n) ;
    cout << cnt << endl;
}

int main()
{
    int n , cnt = 0 ;
    cin >> n ;
    disp(cnt, n) ;
}
