/*“x<0 and x>5”


Output – False


Explanation – This can never be true as there is no ‘x’ such as x<0 and x>5. So, the given boolean expression always evaluates to false.


2. “x>0 or x<-1”


Output – True


Explanation – We have at least one ‘x’ for which given boolean expression evaluates to true. For example, put x=2 in the given expression, and it evaluates to true.
*/

#include<iostream>
#include<string>
#include<vector>

using namespace std ;

int main()
{
    string str ;
    getline(cin, str);

    vector<string>store ;
    string temp ;
    for(int i = 0 ; i< str.length() ; i++)
    {
        if(str[i] == ' ')
        {
            store.push_back(temp) ;
            temp.clear() ;
        }
        else
        {
            temp.push_back(str[i]) ;
        }
    }

    store.push_back(temp) ;
/*
    for(int i = 0 ; i< store.size() ; i++)
    {

        cout<< store[i] << endl ;
    }
    */

    for(int i = 0 ; i< store.size() ;  i++)
    {
        for(int j = 0 ; j< store[i].length() ; j++)
        {

            if()
        }
    }
}
