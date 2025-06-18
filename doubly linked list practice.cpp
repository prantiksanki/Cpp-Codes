#include <iostream>
using namespace std ;

class Node
{
public :
    int data ;
    Node*prev ;
    Node*next ;

    Node (int n)
    {
        this->data = n ;
        this -> prev = NULL ;
        this -> next = NULL ;

    }
};




void InsertBegining(Node*&head)
{
    int d ;
    cout << "Enter value : " ;
    cin >> d ;

    Node*newnode = new Node(d) ;

    newnode->next = head ;
    head -> prev = newnode ;
    head = newnode ;
}


void InsertLast(Node*&tail)
{
    int d ;
    cout << "Enter value : " ;
    cin >> d ;

    Node*newnode = new Node(d) ;
    tail-> next = newnode ;
    newnode->prev = tail ;
    tail = newnode ;

}


void InsertMiddle(Node*&head)
{
    int d ;
    cout << "Enter value : " ;
    cin >> d ;
    int pos  ;
    cout << "Position : "  ;
    cin >> pos  ;

    Node*newnode = new Node(d) ;
    Node*temp = head ;
    int cnt = 1 ;
    while (cnt < pos -1)
    {
         temp = temp -> next ;
         cnt++ ;
    }

    newnode->prev = temp ;
    newnode->next = temp->next ;
    temp -> next = newnode ;
    temp->next->prev = newnode ;

}



void DeleteBegining(Node* &head)
{
    Node* temp = head;
    head = head->next;
    if (head != NULL) {
        head->prev = NULL;
    }
    delete temp;
}

void DeleteLast(Node* &tail)
{
    Node* temp = tail;
    tail = tail->prev;
    if (tail != nullptr) {
        tail->next = nullptr;
    }
    delete temp;

}

void DeleteMiddle(Node* &head)
{
    Node*temp = head ;
    int pos ;
    cout << "Enter position : ";
    cin >> pos ;
    int cnt = 1 ;

    while (cnt < pos - 1 && temp->next != NULL)
    {
        head = head -> next ;
        cnt ++ ;

    }

   Node* toDelete = temp->next;
    temp->next = toDelete->next;
    if (toDelete->next != NULL)
    {
        toDelete->next->prev = temp;
    }
    delete toDelete;

}


void print(Node* head)
{
    Node* temp = head;
    cout << "\nLinked list: ";
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main ()
{
    int d ;
    cout << "Enter value of first node : " << endl ;
    cout << "Enter value : " ;
    cin >> d ;

    Node*node1 = new Node(d) ;
    int choose ;
    Node*head = node1 ;
    Node *tail = head;

    while (1)

    {
    cout << "\n1.Insert at begining  2.Insert at last  3. Insert at middle" << "  " ;

    cout << "4.Delete at begining  5.Delete at last  6.Delete at middle  7.Print 8.Exit" << endl ;

    cout << "Enter choice : " ;
    cin >> choose  ;
    switch (choose)
    {
    case 1 :
        InsertBegining(head) ;
        break ;

    case 2:
        InsertLast(tail);
        break ;

    case 3:
        InsertMiddle(head) ;
        break ;

    case 4:
        DeleteBegining(head);
        break ;

    case 5 :
        DeleteLast(tail);
        break ;

    case 6:
        DeleteMiddle(head);
        break ;

    case 7:
        print(head) ;
        break ;

    case 8:
        return 0 ;

    }

    }

}
