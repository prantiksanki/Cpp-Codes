/*

      1
    2 3
  4 5 6
7 8 9 10

*/


 #include <iostream>
 using namespace std ;

 int main ()
 {

     int i , j , m ;

     cout << "Enter the no of rows : " ;
     cin >> m ;

     i=1 ;

     while (i<=m)
     {

         cout << '\n' ;

         j=1 ;


          while (j<=m-i )
          {

              cout << " " << " " ;
              j=j+1 ;

          }

          j=1 ;

          while (j<=i)
          {

              cout << i+j-1 << " " ;
              j=j+1 ;

          }

          i=i+1 ;
     }
 }
