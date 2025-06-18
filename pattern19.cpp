/*

        *
      * *
    * * *
  * * * *


  */



  #include <iostream>
  using namespace std ;

  int main ()
  {

      int i,j,k,m;

      cout << "Enter the no of row : " ;
      cin >> m ;


      i = 1;

      while (i<=m)
      {

          cout << '\n' ;
          j =1 ;
          while (j<=m-i)
          {

              cout << " "<<" " ;
              j=j+1 ;
          }

         k=1 ;
          while (k<=i)
          {

              cout << "*" << " " ;
              k=k+1 ;
          }

          i=i+1 ;


      }
  }
