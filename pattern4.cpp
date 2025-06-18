 /*

 1 2 3
 4 5 6
 7 8 9

 */


#include <iostream>
 using namespace std ;


int main ()
{

int i , j , m , n ;
int count = 1;

cout << "Enter the no of row and column : " << '\n' ;

cin >> m >> n ;

i=1 ;

while (i<=m)
{
cout<<"\n";
j=1 ;

while (j<=n)
{
        cout << count << '\t';

    count= count+1 ;
     j = j+1 ;
}
i = i+1 ;
}


}
