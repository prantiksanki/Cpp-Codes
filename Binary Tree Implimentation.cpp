#include<iostream>
#include<vector>
#include<queue>
using namespace std ;

class Node
{

public :
    int data ;
    Node*left ;
    Node*right ;
    Node(int d)
    {
        this -> data = d ;
        this-> left = NULL ;
        this -> right = NULL ;
    }
};

void printInOrder(Node*root)
{
    if(root == NULL)
    {

        return ;
    }
    printInOrder(root->left) ;
    cout << root->data << " " ;
    printInOrder(root->right) ;

}


void printOrderWise(Node* root) {
    vector<vector<int>> ans;
    if (root == NULL) {
        cout << "Tree is empty" << endl;
        return;
    }
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        int sizeQueue = q.size();
        vector<int> level;
        for (int i = 0; i < sizeQueue; i++) {
            Node* node = q.front();
            q.pop();
            if (node->left != NULL) {
                q.push(node->left);
            }
            if (node->right != NULL) {
                q.push(node->right);
            }
            level.push_back(node->data);
        }
        ans.push_back(level);
    }

    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int d;
    cout << "Enter value of root: " << endl;
    cin >> d;
    Node* root = new Node(d);
    int choice;

    do {
        int dir;
        cout << "1 -> Left add" << endl;
        cout << "2 -> Right add" << endl;
        cin >> dir;

        Node* temp = root;
        while (true) {
            if (dir == 1) {
                if (temp->left == NULL) {
                    int val;
                    cout << "Enter value: " << endl;
                    cin >> val;
                    temp->left = new Node(val);
                    break;
                } else {
                    temp = temp->left;
                }
            } else if (dir == 2) {
                if (temp->right == NULL) {
                    int val;
                    cout << "Enter value: " << endl;
                    cin >> val;
                    temp->right = new Node(val);
                    break;
                } else {
                    temp = temp->right;
                }
            }
        }

        cout << "Do you want to continue? (1/0): " << endl;
        cin >> choice;
    } while (choice == 1);

    cout << "The entered binary tree is: " << endl;
    printInOrder(root);
    cout << endl << "Tree level order traversal:" << endl;
    printOrderWise(root);

    return 0;
}
