#include <iostream>
using namespace std;

struct Node {
    int key;
    Node* left;
    Node* right;    
    Node(int item) {
        key = item;
        left = NULL;
        right = NULL;
    }
};

// *********************************** INSERTION ************************************

              // ****************** Recursive Approach ******************

// Node* insert(Node* node, int key) {
//   if(node == NULL)
//   {
//     return new Node(key) ; 
//   }

//   if(node -> key == key)
//   {
//     return node ; 
//   }
  
//   if(node -> key < key)
//   {
//     node->right = insert(node->right, key);
//   }
//   else if(node -> key > key)
//   {
//     node->left = insert(node->left, key);
//   }

// }

                      // ****************** Iterative Approach ******************

Node* insert(Node* node, int key) {
   
  Node*newNode = new Node(key);
  if(node == NULL)
  {
    return newNode ; 
  }

  Node*curr = node ; 
  Node*par = NULL ;

  while(curr != NULL)
  {
    par = curr  ;
    
    if(par -> key > key)
    {
      curr = curr -> left ; 
    }
    else if(par -> key < key)
    {
      curr = curr -> right ; 
    }
    else
    {
      return node ; // Key already exists, do not insert duplicates
    }
  }

  if(par -> key > key)
  {
    par->left = newNode; // Insert as left child
  }
  else
  {
    par->right = newNode; // Insert as right child
  }

  return node; // Return the unchanged root pointer
}

// A utility function to do inorder tree traversal
void inorder(Node* root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }
}

// Driver program to test the above functions
int main() {
    // Creating the following BST
    //      50
    //     /  \
    //    30   70
    //   / \   / \
    //  20 40 60 80

    Node* root = new Node(50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);

    // Print inorder traversal of the BST
    inorder(root);

    return 0;
}