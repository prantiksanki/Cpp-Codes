#include <iostream>
using namespace std ;

class Node
{
public :
    int data ;
    Node *next ;

    Node (int n)
    {
        this -> data = n ;
        this -> next = NULL ;
    }
};

int main ()
{
    // FIRST NODE CRETED

    Node*head = new Node(10) ;



    // INSERT AT TAIL

    Node* newNode = new Node(20) ;
    head -> next = newNode ;
    newNode -> next  = NULL ;

    Node* temp = head ;

    while (temp  != NULL)
    {
        cout << temp -> data << endl ;
        temp = temp -> next ;
    }


    // INSERT AT MIDDLE

    Node*newNode1 = new Node(15) ;
    head -> next = newNode1 ;
    newNode1 -> next = newNode ;
    newNode -> next = NULL ;

    Node*temp1 = head ;
    cout << endl << endl << endl ;

    while (temp1 != NULL)
    {
        cout << temp1 -> data << endl ;
        temp1 = temp1 -> next ;
    }



    // INSERT AT BEGINING

    Node*newNode2 = new Node(5) ;
    newNode2 -> next = head ;


}
