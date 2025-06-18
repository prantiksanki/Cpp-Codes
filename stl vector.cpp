// STL VECTOR

#include <iostream>
#include <vector>
using namespace std ;

int main ()
{
     vector<int>v ;
     cout << sizeof(v)<< endl;
     cout << v.capacity () << endl ;
          cout << v.size () << endl ;


/*
     int i ;
     for (i=0 ; i< 5 ; i++)
     {
         int el;
         cin >> el ;

         //v.push_back(el) ;

         v[i] = el ;
     }

     for (i=0 ; i< 5 ; i++)
     {
          cout << v[i] << " " ;
     }

     */

     /*v.push_back (1) ;
     v.push_back (2) ;
     v.push_back (3) ;
     v.push_back (4) ;
     v.push_back (5) ;



      for (int i : v )
      {

          cout << i << " " ;
      }

      cout << endl ;
     cout << sizeof(v)<< endl;
     cout << v.capacity () << endl ;
          cout << v.size () << endl ;

*/

     /* int i ;
     for (i=0 ; i< 5 ; i++)
     {
         //int el;
         cin >> v[i] ;



         //v[i] = el ;
     }


     for (int j : v )
     {

         cout << i<< " " ;
     }*/



     for (int i = 1; i <= 5; i++)

    {
        int el ;
        cin >> el ;
        v.push_back(el);

     }




       for (int j : v)
       {
           cout << j << " " ;

       }
       cout << v.size() ;


}
