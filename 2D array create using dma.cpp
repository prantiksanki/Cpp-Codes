// 2D array create using DMA

#include<iostream>
using namespace std ;

int main ()
{
    int row , col ;

    cout << "Enter no of row : " ;
    cin >> row ;

    cout << "Enter no of column : ";
    cin >> col ;

    int ** arr = new int *[row] ;  // row created

    for (int i = 0 ; i< row ; i++)
    {
        arr[i] = new int [col] ;    // column created
    }

    // input from user

    for (int i =0 ; i<row ; i++)
    {
        for (int j =0 ; j< col ; j++)
        {
            cout << "Enter element : " ;
            cin >> arr[i][j] ;
        }

    }

    // output display

     for (int i =0 ; i<row ; i++)
    {
        for (int j =0 ; j< col ; j++)
        {
             cout << arr[i][j] << " ";
        }
        cout << '\n' ;

    }


}
