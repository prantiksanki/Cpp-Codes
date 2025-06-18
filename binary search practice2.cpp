// Binary search practice
#include <iostream>
using namespace std ;

int main ()
{
    int arr[] = {3,4,7,8,10};
    arr_size = 5 ;
    int key ;

    cout << "Enter the no you want to search : " ;
    cin >> key ;
    int start = 0 ;
    int endno = arr_size ;

    mid = (start + endno) / 2 ;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            return mid ;
        }
        if (key > arr[mid])
        {
            start = mid +1 ;
        }
        else if (key < arr[mid])
        {
            endno = mid +1 ;
        }
    }

}
