#include<iostream>
using namespace std ;

class Node
{
public :

    int data ;
    Node*next ;

    Node(int n)
    {

        this->data = n ;
        this -> next = NULL ;
    }
};


int main ()
{

    Node*node1 = new Node(1) ;
    cout << node1-> data << endl ;

    cout << node1->next  << endl ;
}
