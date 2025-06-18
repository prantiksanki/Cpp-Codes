// BUBBLE SORT PRACTICE

#include <iostream>
using namespace std ;




int bubbleSort(int arr[] , int n )
{

    int i ,j ;
    for (i=0 ; i<n ; i++)
    {


        for (j=0 ; j< n-i-1 ; j++)
        {
            if (arr[j] < arr[j+1])
            {

                swap (arr[j+1],arr[j]);
            }


        }

        cout << arr[j] << " " ;
    }



}

int main ()
{
  int arr[50] ;

  int n ;
  cout << "Enter no of elements in the array : " ;
  cin >> n ;


  int i ;
  for (i=0 ; i<n ; i++)
  {

      cout << "Enter no : ";
      cin >> arr[i] ;

  }

  bubbleSort(arr , n) ;

}
