#include<iostream>

using namespace std ;
class Node
{
public :
    int data ;
    Node*next ;

    Node (int d)
    {
        this -> data = d ;
        this -> next = NULL ;

    }




};

int main ()
{
    int count = 0 ;
    Node* head = new Node(10) ;
    Node*temp = head ;
    Node*temp2 = head ;
    Node*newNode = new Node(20) ;
    head -> next = newNode ;
    Node*newNode2 = new Node(30) ;
    newNode->next = newNode2 ;
    Node*newNode3 = new Node(40) ;
    newNode2->next = newNode3 ;
    Node*newNode4 = new Node(50) ;
    newNode3->next = newNode4 ;

    while (temp != NULL)
    {
        count ++ ;
        temp = temp -> next ;

    }
    int k  ;
    int p = count ;

    cout << "Which node to display from last ? : " << endl ;
    cin >> k ;

    for (int i = 0 ; i<= count -k +1 ; i++)
    {
        if (i == p - k)
        {
            cout << temp2->data << endl ;
        }

        temp2 = temp2 -> next ;
    }


}
