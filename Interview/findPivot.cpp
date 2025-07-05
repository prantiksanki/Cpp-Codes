// 1 2 3 5 1 0

#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int>vec = {1, 2, 3, 5, 1, 0};
    int n = vec.size();

    int l = 0 ;
    int h = n - 1 ; 
    int mid =0  ;

    while(l < h )
    {
        mid = (l+h)/2 ; 
        if(vec[mid] >= vec[mid+1] && vec[mid] >= vec[mid-1])
        {
            cout << "Pivot found at index: " << mid << endl;
            return 0; // Pivot found
        }
        if(vec[mid] <= vec[mid+1])
        {
            h = mid - 1;
        }
        else if(vec[mid] > vec[mid+1])
        {
            l = mid + 1;
        }
    }
    cout << "No pivot found" << endl;
    return -1; // No pivot found

}