// Wave like structure making using matrix.
#include<iostream>
using namespace std ;

int main ()
{
    int arr[3][3] = {{1,2,3} ,{4,5,6},{7,8,9}} ;
    int k = 0 ;
    int temp[9] ;

    for (int i =0 ; i < 3 ; i++)
    {
        if (i%2 == 0)
        {
            for (int j = 0 ; j < 3 ; j++)
            {

                 temp[k] = arr[j][i] ;
                 k++ ;
            }
        }

        else
        {

            for (int j =2 ; j >=0 ; j--)
            {
                temp[k] = arr[j][i] ;
                k++ ;
            }
        }
    }


    cout << endl << "Wave like form is : " <<endl ;

    for (int i = 0; i< 9 ; i++)
    {
        cout << temp[i] ;
    }

}
