#include<iostream>
#include<vector>
using namespace std;

void revArray(vector<int>&arr , int i, int j)
{
    if(i >= j)
    {
        return ;
    }
    swap(arr[i] , arr[j]) ;
    revArray(arr,++i,--j) ;
}

int main()
{
    vector<int>arr = {1,2,3,4,5};
    int sizei = arr.size() ;
    revArray(arr,0,sizei-1);
    for(int i = 0 ; i<arr.size() ; i++)
    {
        cout << arr[i] << endl ;
    }
}
