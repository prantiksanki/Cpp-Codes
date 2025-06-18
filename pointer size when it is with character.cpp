/*#include <stdio.h>

int main()
{
   char firstname[]= "boobiy";
   char* lastname = "eraserhead";
   printf("%d",sizeof(firstname));
   return 0;
}
*/

#include<iostream>
using namespace std ;

int update(int**p)
{
   **p = **p+1 ;
    return **p ;
}

int main ()
{
    int n =5 ;
    int*p = &n ;
    int **q = &p ;
    cout <<

    cout << "Before : " << *p << endl ;
    update(q);
    cout<< "After : " << *p  ;
}
