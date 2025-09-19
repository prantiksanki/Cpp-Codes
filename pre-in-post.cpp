#include<iostream>
#include<vector> 


using namespace std ;

class TreeNode 
{
    public :
    int data ;
    TreeNode*left ;
    TreeNode*right ;

    TreeNode(int val)
    {
        data = val ;
        left = NULL ;
        right = NULL ;
    }
};



void allTraversal(TreeNode*root , vector<int>&pre, vector<int>&in, vector<int>&post)
{
    if(root == NULL)
    {
        return ;
    }
    pre.push_back(root->data) ;
    allTraversal(root->left , pre , in , post) ;
    in.push_back(root->data) ;
    allTraversal(root->right , pre , in , post) ;
    post.push_back(root->data) ;

}

int main()
{
    TreeNode*root = new TreeNode(1) ;
    root->left = new TreeNode(2) ;
    root->right = new TreeNode(3) ;
    root->left->left = new TreeNode(4) ;
    root->left->right = new TreeNode(5) ;

    vector<int>pre , in , post ;
    allTraversal(root , pre , in , post) ;

    cout<<"Preorder Traversal : " ;
    for(auto it : pre)
    {
        cout<<it<<" " ;
    }
    cout<<endl ;

    cout<<"Inorder Traversal : " ;
    for(auto it : in)
    {
        cout<<it<<" " ;
    }
    cout<<endl ;

    cout<<"Postorder Traversal : " ;
    for(auto it : post)
    {
        cout<<it<<" " ;
    }
    cout<<endl ;

    return 0 ;
}