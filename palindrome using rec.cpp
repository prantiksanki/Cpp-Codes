#include<iostream>
#include<string>
using namespace std;

bool palindrome(string str, int i, int j)
{
    if(i >= j)
    {
        return true ;
    }
    if(str[i] != str[j])
    {
        return false ;
    }
    return palindrome(str, ++i, --j) ;
}

int main()
{
    string str ;
    cin >> str ;
    cout << palindrome(str, 0, str.length()-1) ;

}
