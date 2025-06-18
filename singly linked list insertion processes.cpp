#include <iostream>
using namespace std ;


class Node
{
    public :
    int data ;
    Node*next ;
    //CONSTRUCTER

     Node(int x)
    {
        this->data = x ;
        this->next = NULL ;

    }
};


void insertBegining(Node* &head)
{
    int n ;
    cout << "Enter a no : " ;
    cin >> n ;
    Node*temp = new Node(n);
    temp->next = head ;
    head = temp ;

}

void insertLast(Node* &head)
{
    int n ;
    cout << "Enter a no : " ;
    cin >> n ;
    Node*temp = new Node (n) ;
    Node* curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
}


void insertMiddle(Node* &head)
{
    int pos;
    cout << "Enter position : ";
    cin >> pos;
    int n;
    cout << "Enter a no : ";
    cin >> n;
    Node* newNode = new Node(n);
    if (pos == 1)
    {
        newNode->next = head;
        head = newNode;
        return;
    }
    Node* temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        cout << "Invalid position\n";
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}


void display(Node* head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}



void sortzot()
{
    int countzero = 0 ;
    int countone = 0 ;
    int counttwo = 0;


}




int main()
{
    int choice;
    Node* node1 = new Node(10);
    Node* head = node1;
    while (true)
    {
        cout << "1.Insert at beginning\n2.Insert at last\n3.Insert at middle\n4.Display\n5.Exit\n";
        cout << "Enter choice : ";
        cin >> choice;
        switch (choice)
        {
            case 1:
                insertBegining(head);
                break;
            case 2:
                insertLast(head);
                break;
            case 3:
                insertMiddle(head);
                break;
            case 4:
                display(head);
                break;

            case 5 :
                sortzot() ;
                break ;
            case 6:
                return 0;
            default:
                cout << "Enter valid option\n";
        }
    }
}
