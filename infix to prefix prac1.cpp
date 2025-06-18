#include<iostream>
#include<stack>
#include<string>
using namespace std ;


int main ()
{
    string s ;
    cout << "Enter Infix Expression : " << endl ;
    cin >> s ;
    stack <char>st ;
    for (int i=0 ; i != '\0' ; i++)
    {

        st.push(s[i]) ;
    }

     while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
}
