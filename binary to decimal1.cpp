// CREATE REVERSE NO OF A NO

 #include <iostream>
 #include <math.h>

 using namespace std ;

 int main ()
 {

     int n ,m ,i ;
     int sum = 0;



     cout << "Enter a Binary no : ";
     cin >> n ;

     cout << "Enter the no of bit in this binary no : " ;
     cin >> m ;


      i =0 ;
     while (i < m)
     {

         int digit = n%10 ;

         if (digit ==1 )
         {

             sum = sum + pow (2,i);
         }


         n =n/10 ;
         i = i+1 ;


     }


     cout << "The decimal form is : " << sum ;
 }
