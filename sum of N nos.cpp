#include<iostream>
using namespace std;

void sumOfN(int n, int& sum)
{
    if(n == 0)
    {
        return ;
    }
    sum += n ;
    sumOfN(--n, sum) ;
}

int main()
{
    int n ;
    cin >> n ;
    int sum = 0 ;
    sumOfN(n, sum) ;
    cout << sum << endl ;
}
